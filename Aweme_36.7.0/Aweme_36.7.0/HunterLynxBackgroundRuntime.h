@class NSString, HunterLynxBackgroundRuntimeConfig, HunterLynxBackgroundRuntimeMonitor, NSMutableDictionary, NSDictionary, NSMutableArray, LynxBackgroundRuntime, BDXBridgeEventSubscriber;
@protocol HunterLynxBackgroundRuntimeLifecycleProtocol;

@interface HunterLynxBackgroundRuntime : NSObject <HunterLynxBackgroundRuntimeProtocol>

@property (retain, nonatomic) NSMutableArray *missingSelectors;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *runtimeSchema;
@property (copy, nonatomic) NSString *runtimeUrl;
@property (copy, nonatomic) NSString *runtimeState;
@property (weak, nonatomic) NSDictionary *presetData;
@property (retain, nonatomic) HunterLynxBackgroundRuntimeConfig *runtimeConfig;
@property (retain, nonatomic) LynxBackgroundRuntime *runtime;
@property (weak, nonatomic) id<HunterLynxBackgroundRuntimeLifecycleProtocol> lifecycleDelegate;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) NSMutableDictionary *eventCallBacks;
@property (retain, nonatomic) HunterLynxBackgroundRuntimeMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendJSEvent:(id)a0 withParams:(id)a1;
- (void)runtime:(id)a0 OnReady:(id)a1;
- (void)runtime:(id)a0 didRecieveError:(id)a1;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)unRegisterEventCallBack:(id)a0;
- (void)registerEventCallBack:(id /* block */)a0 forEvent:(id)a1;
- (void)sendMissingSelectorIfNeed;
- (void)reportCreateRuntimeErrorWithParams:(id)a0;
- (void)onLynxBGRuntimeReady;
- (void)onAPPActiveNotification;
- (void)reportCreateRuntimeWithParams:(id)a0;
- (id)buildTrackParamsWithParams:(id)a0 statusCode:(long long)a1;
- (void)reportCreateRuntimeRestartWithParams:(id)a0;
- (void)updatePresetData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
