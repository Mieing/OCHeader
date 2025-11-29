@interface AWELiveSwiftImpl.CrossBaseComponent : AWELiveSwiftImpl.BaseClass {
    void /* unknown type, empty encoding */ __rts_componentContext;
}

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)componentUnmount;
- (void)componentDestroy;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
