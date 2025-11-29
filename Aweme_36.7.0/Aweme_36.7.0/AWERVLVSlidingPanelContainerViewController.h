@class UIView, AWERVLVBasePanelViewModel, AWEAwemeModel, NSArray, AWERVDetailPageContext, UIScrollView, NSDictionary, AWESlidingTabbarView, NSObject, NSString, AWESlidingViewController;
@protocol AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol, AWERelatedVideoDetailVideoContainerViewControllerDelegate, AWERVLVSlidingPanelProtocol;

@interface AWERVLVSlidingPanelContainerViewController : UIViewController <AWESlidingViewControllerDelegate, AWERVLVSlidingPanelContainerViewControllerProtocol>

@property (retain, nonatomic) UIView *slidingTabBarBgView;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabbar;
@property (retain, nonatomic) AWESlidingViewController *slidingviewController;
@property (nonatomic) long long tabIndex;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSArray *allViewModelArray;
@property (retain, nonatomic) NSArray *viewModelArray;
@property (retain, nonatomic) AWERVLVBasePanelViewModel<AWERVLVSlidingPanelProtocol> *currentViewModel;
@property (weak, nonatomic) NSObject<AWERelatedVideoDetailVideoContainerViewControllerDelegate> *delegate;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) id<AWERelatedVideoDetailVideoRelatedVideoViewControllerProtocol> relatedWaterFlowView;
@property (retain, nonatomic) UIScrollView *commentScrollView;
@property (nonatomic) double maxAndMinVideoDiff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)onScrollViewDidScroll:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)showInputView;
- (BOOL)isLastTab;
- (id)p_buttonTextFont;
- (void)commentButtonDidClicked;
- (void)startRequestAnimating;
- (void)refreshModel:(id)a0 params:(id)a1;
- (BOOL)canScrollToDownDirection;
- (void)scrollToRelatedVideos:(BOOL)a0;
- (void)scrollToComment:(BOOL)a0;
- (void)scrollToFeedShare:(BOOL)a0;
- (long long)selectTabIndex;
- (void)setupWithRelatedPreloadVideos:(id)a0 forModel:(id)a1;
- (double)p_sliderButtonWidth;
- (void)backToTopAction;
- (void)trackBackToTopButtonWithName:(id)a0;
- (void)didCreateInputView:(id)a0;
- (void)didShowInputViewBlock;
- (void)willHideInputViewBlock;
- (id)p_selectedButtonTextFont;
- (void)onTabbarDoubleTap:(id)a0;
- (id)initWithTabIndex:(long long)a0;
- (void)refreshRelatedVideos:(id)a0 scene:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)commentScrollToTopIfCurrentShow;
- (id)currentSelectScrollView;
- (void)updateContainerWithPanelViewModelArray:(id)a0;
- (BOOL)containsPanelID:(id)a0;
- (void)updateTitle:(id)a0 atPanel:(id)a1;
- (void)showButtonDot:(BOOL)a0 panelID:(id)a1 color:(id)a2;
- (void)reloadSlidingViewControllers;
- (long long)indexOfPanelID:(id)a0;
- (void)scrollToIndex:(long long)a0 toTop:(BOOL)a1;
- (void)reloadAvailablePanels;
- (void)reloadPanels;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (struct CGPoint { double x0; double x1; })currentScrollOffset;
- (void)willStartScroll;
- (void)scrollToTop:(BOOL)a0;

@end
