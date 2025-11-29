@class HTSLiveApi, IESLiveGCDTimer, NSMutableArray, NSObject;
@protocol IESLiveRoomService, OS_dispatch_semaphore;

@interface IESLiveBackupSEISender : NSObject

@property (retain, nonatomic) NSMutableArray *backupSEIList;
@property (retain, nonatomic) IESLiveGCDTimer *sendTimer;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSLiveApi *api;
@property (nonatomic) BOOL firstSend;
@property (nonatomic) BOOL isSending;
@property (nonatomic) BOOL couldLogCallBack;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) BOOL disableSendingApiCall;
@property (nonatomic) BOOL disableSendSEIMsgCallBack;

- (void)didSetAttachingDIContext;
- (id)commonParams;
- (void)logWithDesc:(id)a0 extra:(id)a1;
- (void)startSendBackupSEI;
- (void)onSendSEIMsg:(id)a0 withIndex:(long long)a1 andPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)stopSendBackupSEI;
- (void)logWithDesc:(id)a0 extra:(id)a1 isError:(BOOL)a2;
- (void)addBackupSEI:(id)a0;
- (id)currentBackupSEIListJsonString;
- (id)currentStreamID;
- (void)sendBackupSEI;
- (void)removeAllBackupSEI;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
