@protocol HMDUITrackerDelegate;

@interface HMDUITracker : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isRuning;
}

@property (class, readonly) HMDUITracker *sharedInstance;

@property (weak, nonatomic) id<HMDUITrackerDelegate> delegate;

- (void)enableUIActionIfNeed;
- (void)enableVCFinderIfNeed;
- (void)trackWithName:(id)a0 event:(id)a1 parameters:(id)a2;
- (void)trackableContext:(id)a0 didTriggerEvent:(long long)a1 parameters:(id)a2;
- (void)trackableContext:(id)a0 eventWithName:(id)a1 parameters:(id)a2;
- (void)trackableContext:(id)a0 didTriggerEvent:(long long)a1;
- (void)didAppearViewController:(id)a0;
- (void)didLeaveViewController:(id)a0;
- (void)switchToNewVCFrom:(id)a0 to:(id)a1;
- (void)updateState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didBecomeActive:(id)a0;
- (void)willResignActive:(id)a0;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;

@end
