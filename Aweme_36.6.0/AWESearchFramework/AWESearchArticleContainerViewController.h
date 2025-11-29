@class AWESearchArticleMusicView, AWESearchArticleContainerViewModel, NSString, AWESearchArticleDetailBottomInteractionView, AWESearchArticleTabListViewController, NSObject, AWESearchArticleDetailTopBarView;
@protocol AWEAwemePlayInteractionInteractorProtocol, AWESearchArticleContainerMusicDelegate;

@interface AWESearchArticleContainerViewController : AWEShellViewController <AWERouterViewControllerProtocol, AWEZoomTransitionInnerContextProvider, AWESearchArticleContainerViewControllerProtocol, AWEArticleTransitionInnerContextProvider, AWESearchPhotosPreviewControllerDelegate>

@property (retain, nonatomic) AWESearchArticleTabListViewController *tabListVC;
@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *playInteractor;
@property (retain, nonatomic) AWESearchArticleDetailTopBarView *topBar;
@property (retain, nonatomic) AWESearchArticleDetailBottomInteractionView *bottomBar;
@property (retain, nonatomic) AWESearchArticleContainerViewModel *viewModel;
@property (retain, nonatomic) AWESearchArticleMusicView *musicView;
@property (copy, nonatomic) id /* block */ slideToDismissBlock;
@property (weak, nonatomic) id<AWESearchArticleContainerMusicDelegate> musicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithModel:(id)a0 params:(id)a1;
+ (id)viewControllerWithModel:(id)a0 params:(id)a1 slideToDismissBlock:(id /* block */)a2;
+ (void)routeWithModel:(id)a0 params:(id)a1;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupViewModel;
- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)a0;
- (BOOL)zoomTransitionShouldAnimateWithTransform;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (id)createControllerManager;
- (void)setupObserver;
- (void)setupTopBar;
- (id)p_relationContext;
- (void)photosPreviewViewControllerWillAppear:(id)a0;
- (void)setupTrackerTransmissionInfo;
- (void)setupPlayInteractor;
- (void)setupBottomBar;
- (void)pushTransitionWillBegin;
- (void)pushTransitionDidComplete;
- (void)doPushAnimation;
- (void)popTransitionWillBegin;
- (void)popTransitionDidComplete;
- (void)doPopAnimation;
- (void)setupMusicView;
- (void)doFollow;
- (void)doUnfollow;
- (void)showDeletedStatus;
- (void)p_moveOut;
- (void)p_moveIn;
- (id)popTransitionParams;
- (void)receivePushTransitionParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)transitionContext;
- (double)animationDuration;
- (void)viewWillAppear:(BOOL)a0;
- (id)createContext;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupLayout;
- (void)setupContent;

@end
