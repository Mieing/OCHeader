@interface AWEIMGrowthImpl.HunterJSRuntimeServiceImpl : HTSService <HunterLynxBackgroundRuntimeLifecycleProtocol, IESIMHunterJSRuntimeService> {
    void /* unknown type, empty encoding */ backgroundRuntimeCacheKey;
    void /* unknown type, empty encoding */ backgroundRuntime;
    void /* unknown type, empty encoding */ jsRuntimeConfig;
    void /* unknown type, empty encoding */ isReady;
}

- (void)runtime:(id)a0 OnReady:(id)a1;
- (void)runtime:(id)a0 didRecieveError:(id)a1;
- (void)startJSRuntime;
- (void)sendJSEvent:(id)a0 withParams:(id)a1;
- (id)userInfoData;
- (void).cxx_destruct;
- (id)init;

@end
