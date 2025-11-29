@class DUXSlidingScrollView, NSString, DUXTabBar, NSMutableArray;
@protocol DUXTabBarProtocol, DUXTabBarContainerDelegate;

@interface DUXTabBarContainerController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isScrollingWhileDisappear;
@property (nonatomic) long long scrollPreIndex;
@property (nonatomic) long long animatingDestinationIndex;
@property (retain, nonatomic) NSMutableArray *transitionAppearArray;
@property (retain, nonatomic) NSMutableArray *transitionDisappearArray;
@property (retain, nonatomic) NSMutableArray *appearCompleteArray;
@property (retain, nonatomic) DUXTabBar<DUXTabBarProtocol> *tabbarView;
@property (retain, nonatomic) DUXSlidingScrollView *contentScrollView;
@property (nonatomic) BOOL slideEnabled;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<DUXTabBarContainerDelegate> delegate;
@property (copy, nonatomic) id /* block */ indexChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (id)initWithSelectedIndex:(long long)a0;
- (void)updateContentScrollViewUI;
- (void)scollViewScrollToIndex:(long long)a0;
- (long long)numberOfControllers;
- (id)controllerAtIndex:(long long)a0;
- (id)currentVCAtIndex:(long long)a0;
- (void)vcHasCompleteAppear:(id)a0;
- (void)correctSelectedIndexIfNeededWithScrollView:(id)a0;
- (void)vcHasCompleteDisappear:(id)a0;
- (void)_makeControllersDidAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameAtIndex:(long long)a0;
- (void)addViewController:(id)a0 atIndex:(long long)a1;
- (long long)nextIndexForScrollView:(id)a0;
- (void)updateScrollIndexControllerWithTransitionType:(long long)a0 index:(long long)a1;
- (void)_makeViewControllerVisibleAtIndex:(long long)a0 transitionType:(long long)a1;
- (void)_makeControllersWillAppearAtPreIndex:(long long)a0 currentIndex:(long long)a1;
- (void)updateSelectedIndexWithScrollView:(id)a0;
- (long long)_currentIndexForScrollView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void)reloadViewControllers;

@end
