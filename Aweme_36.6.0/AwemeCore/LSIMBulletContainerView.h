@class LSIMBulletContainerContext, NSString, LSIMBulletContainerBDXLifeCycleDelegateWrapper, UIView, NSMutableArray, LSIMBulletContainerViewModel;
@protocol LSIMBulletContainerLifeCycleDelegate, BDXViewContainerProtocol;

@interface LSIMBulletContainerView : UIView <BDXContainerLifecycleProtocol, LSIMBulletContainerLifeCycleDelegate>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) LSIMBulletContainerContext *bulletContext;
@property (retain, nonatomic) LSIMBulletContainerBDXLifeCycleDelegateWrapper *lifeCycleDelegateWrapper;
@property (nonatomic) BOOL hasObserverPreserveData;
@property (nonatomic) BOOL isConfigChange;
@property (nonatomic) BOOL shouldWaitForFirstScreen;
@property (retain, nonatomic) NSMutableArray *missingSelectors;
@property (weak, nonatomic) id<LSIMBulletContainerLifeCycleDelegate> lifeCycleDelegate;
@property (retain, nonatomic) LSIMBulletContainerViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)p_observePreserveData:(id)a0;
- (id)innerViewModel;
- (void)configWithContext:(id)a0;
- (void)updateClientData;
- (void)sendMissingSelectorIfNeed;
- (void)p_tryLoadWithType:(long long)a0;
- (void)p_sendPageScrollEventWithParams:(id)a0;
- (void)p_sendViewVisibleEventWithParams:(id)a0;
- (void)viewWillStartDisplaying;
- (void)viewDidEndDisplaying;
- (void)p_configWithViewModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)containerID;
- (void)viewControllerWillAppear;
- (id)init;
- (void)viewControllerDidDisappear;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
