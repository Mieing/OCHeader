@class WXGChatLogProtoHandler, NSString, WXGLocalAreaCommunicationClient, NSObject;
@protocol OS_dispatch_queue, WXGBackupBasicLogicDelegate;

@interface WXGBackupBasicLogic : NSObject <WXGBackupBasicLogicProtocol>

@property (weak, nonatomic) id<WXGBackupBasicLogicDelegate> delegate;
@property (nonatomic) BOOL retransfer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processLogicQueue;
@property (retain, nonatomic) WXGLocalAreaCommunicationClient *networkHandler;
@property (retain, nonatomic) WXGChatLogProtoHandler *protoHandler;
@property (nonatomic) BOOL bStartLogic;
@property (nonatomic) BOOL bConfirmLogic;
@property (nonatomic) BOOL bInTransfer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startService;
- (void)stopService;
- (void)resendService;
- (void)confirmLogic;
- (void)restartLogic;
- (void)processStartResponseData:(id)a0;
- (void)processStartRequestData:(id)a0;
- (void)processRequestSessionData:(id)a0;
- (void)processRequestSessionResponseData:(id)a0;
- (void)processDataPushData:(id)a0;
- (void)processDataPushResponseData:(id)a0;
- (void)processBackupDataTagData:(id)a0;
- (void)processBackupDataTagResponseData:(id)a0;
- (void)processFinishRequestData:(id)a0;
- (void)processFilterRequestData:(id)a0;
- (void)processFilterResponseData:(id)a0;
- (void)reportDisconnect:(unsigned long long)a0;
- (void)processNotifyCode:(unsigned long long)a0;
- (void)processOnMainThreadNotifyCode:(unsigned long long)a0;
- (void)processOnMainThreadProgressCurrentSession:(unsigned long long)a0 totalSession:(unsigned long long)a1;
- (void)processProgressCurrentSession:(unsigned long long)a0 totalSession:(unsigned long long)a1;
- (void)processOnMainThreadAlert:(unsigned long long)a0;
- (void).cxx_destruct;

@end
