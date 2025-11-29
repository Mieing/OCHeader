@class NSString, UIView, IESIMBulletContainerBDXLifeCycleDelegateWrapper, NSMutableArray;
@protocol IESIMBulletContainerViewModelProtocol, IESIMBulletContainerLifeCycleDelegate, BDXViewContainerProtocol;

@interface IESIMBulletContainerView : UIView <IESIMBulletContainerProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) IESIMBulletContainerBDXLifeCycleDelegateWrapper *lifeCycleDelegateWrapper;
@property (nonatomic) BOOL shouldRefreshView;
@property (retain, nonatomic) NSMutableArray *missingSelectors;
@property (weak, nonatomic) id<IESIMBulletContainerLifeCycleDelegate> lifeCycleDelegate;
@property (retain, nonatomic) id<IESIMBulletContainerViewModelProtocol> viewModel;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)innerViewModel;
- (void)configWithContext:(id)a0;
- (void)sendMissingSelectorIfNeed;
- (void)p_configWithContext:(id)a0;
- (void)p_updateContainerLifeCycleDelegate:(id)a0;
- (void)updateBulletDataIfOnScreenWithContext:(id)a0;
- (void)p_tryLoadWithType:(long long)a0;
- (void)p_tryStartLynxRuntimeIfNeeded;
- (void)p_tryUpdateGlobalProps;
- (void)p_trySendPageScrollShowEventCause:(id)a0;
- (void)p_sendPageScrollEventWithParams:(id)a0;
- (void)p_sendViewVisibleEventWithParams:(id)a0;
- (void)p_sendViewCardPlayStatusWithParams:(id)a0;
- (void)containerDidFirstScreenForDisplaying;
- (void)viewWillStartDisplaying;
- (void)viewDidEndDisplaying;
- (void)viewPlayStatusOn;
- (void)viewPlayStatusOff;
- (void)updateBulletDataWithContext:(id)a0 forceRefresh:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewControllerWillAppear;
- (id)init;
- (void)viewControllerDidDisappear;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;

@end
