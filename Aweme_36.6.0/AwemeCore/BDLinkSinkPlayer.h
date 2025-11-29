@class BDCastGCDWebServer, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, BDLinkSinkPlayerDelegate;

@interface BDLinkSinkPlayer : NSObject <BDCastGCDWebServerDelegate>

@property (retain, nonatomic) BDCastGCDWebServer *webServer;
@property (retain, nonatomic) NSMutableDictionary *registerServiceDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (nonatomic) unsigned long long serverPort;
@property (copy, nonatomic) NSString *serverIP;
@property (weak, nonatomic) id<BDLinkSinkPlayerDelegate> delegate;
@property (retain, nonatomic) NSString *serviceTypeStr;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)versionStr;

- (void)webServerDidStart:(id)a0;
- (void)webServerDidCompleteBonjourRegistration:(id)a0;
- (void)webServerDidUpdateNATPortMapping:(id)a0;
- (void)webServerDidConnect:(id)a0;
- (void)webServerDidDisconnect:(id)a0;
- (void)webServerDidStop:(id)a0;
- (void)sendMessage:(id)a0 serviceInfo:(id)a1 withCallback:(id /* block */)a2;
- (BOOL)startWithRunInBackground:(BOOL)a0 serviceTypeString:(id)a1 error:(id *)a2;
- (void)handleGetDeviceInfoCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleGetNetInfoCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handlePlayCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handlePauseCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleResumeCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleStopCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleSeekCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleSetVolumeCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleGetVolumeInfoCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleAddVolumeCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleSubVolumeCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleSpeedCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleBulletCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleGetStatusInfoCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleRegisterCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleUnregisterCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleMessageCmd:(id)a0 serviceInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)registerServiceInfo:(id)a0;
- (BOOL)isRegisterForService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)unregisterService:(id)a0;

@end
