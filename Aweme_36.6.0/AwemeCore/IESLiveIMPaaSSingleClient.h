@class IESLiveIMClientWrapper, NSString, IESLiveIMBizConfig, IESLiveIMRoomConfig, IESLiveIMAppConfig;
@protocol IESLiveIMClientDataReceiver;

@interface IESLiveIMPaaSSingleClient : NSObject <IESLiveIMPaaSClient, IESLiveIMClientParamsConfig, IESLiveIMClientDataReceiver>

@property (retain, nonatomic) IESLiveIMClientWrapper *imClient;
@property (weak, nonatomic) id<IESLiveIMClientDataReceiver> dataReceiver;
@property (retain, nonatomic) IESLiveIMRoomConfig *roomConfig;
@property (retain, nonatomic) IESLiveIMAppConfig *appConfig;
@property (retain, nonatomic) IESLiveIMBizConfig *bizConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)asyncSendPushMessage:(id)a0;
- (void)didRecievePacket:(id)a0;
- (id)websocketUrl;
- (id)httpQuerys:(id)a0;
- (id)httpParams:(id)a0;
- (id)websocketHeaders:(id)a0;
- (id)websocketParams:(id)a0;
- (id)httpHeader:(id)a0;
- (id)paramsFromAppConfig;
- (id)paramsFromBizConfig;
- (id)paramsForNetwork:(id)a0;
- (void)registerWith:(id)a0 receiver:(id)a1;
- (void)registerAsyncSendPushMessageCallback:(id /* block */)a0;
- (void)reconnect;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;
- (void)stop;
- (id)httpUrl;
- (void)start;
- (void)setup;
- (void)unregisterWith:(id)a0;
- (long long)defaultTimeout;

@end
