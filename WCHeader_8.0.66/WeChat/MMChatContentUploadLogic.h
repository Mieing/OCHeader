@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MMChatContentUploadLogic : MMObject <IMMChatContentUploadLogicExt, INewSyncExt, MMKernelExt>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *savedSessionInfoArr;
@property (retain, nonatomic) NSMutableArray *reportSessionInfoArr;
@property (nonatomic) BOOL validSync;
@property (nonatomic) unsigned int reportToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startLogic;
- (BOOL)shouldUpload;
- (void)recoverFormerData;
- (void)saveCurrentData:(id)a0;
- (void)checkAndCompareData:(id)a0;
- (void)report:(BOOL)a0 withToken:(unsigned int)a1;
- (void)DidEnterBackground:(id)a0;
- (void)DidEnterForeground:(id)a0;
- (void)WillTerminate:(id)a0;
- (void)onPreQuit;
- (void)onNewSyncEnd;
- (void)onExtChatUploadEnterChat:(id)a0;
- (void)onExtChatUploadLeaveChat:(id)a0;
- (void)onExtChatUploadReplyChat:(id)a0;
- (void).cxx_destruct;

@end
