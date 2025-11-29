@class NSString, BDPPromise, BDPUniqueID;

@interface BDPAppRouteEventMonitor : NSObject <BDPAppPageMonitorProtocol>

@property (nonatomic) long long state;
@property (nonatomic) BOOL didEventPluginResult;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) BOOL didEventPluginStart;
@property (nonatomic) double pluginLoadStartTime;
@property (retain, nonatomic) BDPPromise *resultPromise;
@property (retain, nonatomic) BDPPromise *pageDomReadyPromise;
@property (retain, nonatomic) BDPPromise *serviceLoadPromise;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUniqueID:(id)a0 pagePath:(id)a1;
- (void)appPageControllerDidDomReady:(id)a0;
- (void)appPageControllerDidLoadStart:(id)a0;
- (void)eventDynamicPluginLoadStart;
- (void)setupPromisesIfNeeded;
- (void)eventDynamicPluginPageVCDomReady:(id)a0;
- (void)eventDynamicPluginServiceLoadException:(id)a0;
- (void)realEventDynamicPluginLoadResultWithParams:(id)a0;
- (long long)errorCodeFromError:(id)a0;
- (id)eventParamsFromPromiseValues:(id)a0;
- (void)beginLoadPageVC:(id)a0;
- (void)endLoadPageVC:(id)a0;
- (void)beginRoute;
- (void)beginLoadService;
- (void)endLoadServiceWithException:(id)a0;
- (void)endRouteWithError:(id)a0;
- (void)eventDynamicPluginLoadResultWithParams:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)dealloc;

@end
