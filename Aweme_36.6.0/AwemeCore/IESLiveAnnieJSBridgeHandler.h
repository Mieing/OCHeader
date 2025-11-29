@class NSString;
@protocol HTSLiveViewHierarchyProvider, IESLiveURLSchemaHandler, IESLivePiperProtocol, IESLiveFullLinkMonitor, IESLiveMonitor;

@interface IESLiveAnnieJSBridgeHandler : NSObject <IESLivePiperHandlerProtocol, IESLiveAnnieXBridgeMethodsDependencyProtocol, BDXBridgeToastServiceProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> viewProvider;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)registerHandlerWithBridge:(id)a0;
- (void)showToastWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)webviewNavigationCallHandler;
- (id /* block */)closeCallHandler;
- (id /* block */)closeAndOpenCallHandler;
- (id /* block */)toastCallHandler;
- (id /* block */)reportADLogCallHandler;
- (id /* block */)sendLogV1CallHandler;
- (id /* block */)sendMonitorCallHandler;
- (id /* block */)handleNotificationSettingsCallHandler;
- (id /* block */)reportALogCallHandler;
- (id /* block */)uploadFullLinkMonitorCallHandler;
- (id /* block */)handleSharedKvCallHandler;
- (void)showToastWithParams:(id)a0 callback:(id /* block */)a1;
- (id)closeContainer:(id)a0 keepOffline:(BOOL)a1 animate:(BOOL)a2 willClose:(id /* block */)a3 completion:(id /* block */)a4;
- (void)applicationOpenUrl:(id)a0 withHybridCert:(id)a1 context:(id)a2 error:(id *)a3;
- (void)applicationOpenUrl:(id)a0 withCert:(id)a1 error:(id *)a2;
- (id)closeContainer:(id)a0 animate:(BOOL)a1 completion:(id /* block */)a2;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
