@class NSMutableDictionary, NSString, WCLanTransferSSSQueue, NSObject;
@protocol OS_dispatch_queue;

@interface WCLanTransferServerService : MMUserService <WCLanTransferSSSDelegate, MMServiceProtocol>

@property (retain, nonatomic) WCLanTransferSSSQueue *sssQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lanTransferServerQueue;
@property (retain, nonatomic) NSMutableDictionary *serverTaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canUseLanTransfer:(id)a0;

- (id)init;
- (void)checkOldTaskInfo;
- (id)addMessageWrap:(id)a0;
- (void)onLanTransferSSS:(id)a0 sendSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
