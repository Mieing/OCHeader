@class NSString;
@protocol AWELeftSideBarNavigationControllerDelegateProtocol;

@interface AWELeftSideBarNavigationController : UINavigationController <AWEHPSideBarNonInteractedDismissFromContextProvider, AWEHPSideBarPresentToContextProvider, AWEHPSideBarReopenProtocol>

@property (weak, nonatomic) id<AWELeftSideBarNavigationControllerDelegateProtocol> sideBarDelegate;
@property (readonly, nonatomic) BOOL hasTriggerPresentAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (BOOL)transition_delayEndPercentageDriveIfNeededWithContext:(id)a0;
- (void)reopenSideBarWithModel:(id)a0 completion:(id /* block */)a1;
- (double)sideBarNonInteractedDismissAnimationDuration;
- (void)sideBarNonInteractedDismissShowAnimation;
- (void)sideBarNonInteractedDismissEndAnimationWithResult:(BOOL)a0;
- (double)presentAnimationDuration;
- (void)willStartPresentAnimation:(BOOL)a0;
- (void)startPresentAnimation;
- (void)endPresentAnimationWithResult:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
