@class AWEIMMessageTabContext, IESIMSlardarViewControllerInfoInjector, NSString;

@interface AWEIMMessageTabViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMMessageTabContext *componentContext;
@property (retain, nonatomic) IESIMSlardarViewControllerInfoInjector *slardarInfoInjector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)awe_themeReload;
- (void)awe_scrollToTop;
- (void)tabBarItemViewControllerDidSelectFromPreviousIndex:(long long)a0;
- (void)tabBarItemViewControllerDidUnselect;
- (void)tabBarItemViewControllerDidDoubleTap;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)setLastRouterAction:(id)a0;
- (id)lastRouterAction;
- (unsigned long long)messageTabTransition_destinatedType;
- (id)messageTabTransition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)messageTabTransition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)messageTabTransition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)messageTabTransition_didPopDoneTransitionWithContext:(id)a0;
- (void)messageTabTransition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)didEnterToSecondaryVC:(id)a0;
- (void)didCloseSecondaryVC:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (id)searchBarView;

@end
