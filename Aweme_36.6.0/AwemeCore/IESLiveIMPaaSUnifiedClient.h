@class NSMutableDictionary, IESLiveIMUnifiedClientWrapper, NSString, IESLiveIMRoomConfig;
@protocol IESLiveIMClientDataReceiver;

@interface IESLiveIMPaaSUnifiedClient : IESLiveIMPaaSSingleClient <IESLiveIMUnifiedClientDelegate>

@property (retain, nonatomic) NSMutableDictionary *dataSubscriberDic;
@property (retain, nonatomic) IESLiveIMUnifiedClientWrapper *unifiedClient;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) double maxUnusedTime;
@property (weak, nonatomic) id<IESLiveIMClientDataReceiver> dataReceiver;
@property (retain, nonatomic) IESLiveIMRoomConfig *roomConfig;
@property (nonatomic) BOOL shouldSetupByRegister;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)asyncSendPushMessage:(id)a0;
- (void)didRecievePacket:(id)a0;
- (id)websocketUrl;
- (void)registerWith:(id)a0 receiver:(id)a1;
- (void)registerAsyncSendPushMessageCallback:(id /* block */)a0;
- (void)unregisterBusiness:(long long)a0 params:(id)a1;
- (id)businessParamsWith:(id)a0;
- (void)registerBusiness:(long long)a0 params:(id)a1 receiver:(id)a2;
- (void)didReceivePacket:(id)a0 from:(long long)a1;
- (void)unifiedClientLonglinkDisconnectWithNoBiz;
- (void)unifiedClient:(id)a0 notUsedFortime:(double)a1;
- (void)reconnect;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;
- (void)stop;
- (id)httpUrl;
- (void)start;
- (void)setup;
- (void)unregisterWith:(id)a0;

@end
