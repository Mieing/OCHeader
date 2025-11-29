@class NSString, ACCSlidingScrollView, NSMutableArray, UIView;
@protocol ACCSlidingTabbarProtocol, ACCSlidingViewControllerDelegate;

@interface ACCSlidingViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (nonatomic) long long animatingDestinationIndex;
@property (nonatomic) BOOL isViewAppearing;
@property (nonatomic) long long scrollPreIndex;
@property (nonatomic) BOOL isScrolling;
@property (retain, nonatomic) NSMutableArray *transitionAppearArray;
@property (retain, nonatomic) NSMutableArray *transitionDisappearArray;
@property (retain, nonatomic) NSMutableArray *appearCompleteArray;
@property (nonatomic) BOOL isScrollingWhileDisappear;
@property (retain, nonatomic) UIView<ACCSlidingTabbarProtocol> *tabbarView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL slideEnabled;
@property (nonatomic) BOOL needAnimationWithTapTab;
@property (weak, nonatomic) id<ACCSlidingViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldAdjustScrollInsets;
@property (retain, nonatomic) ACCSlidingScrollView *contentScrollView;
@property (nonatomic) BOOL enableSwipeCardEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSelectedIndex:(long long)a0;
- (long long)numberOfControllers;
- (id)controllerAtIndex:(long long)a0;
- (id)currentVCAtIndex:(long long)a0;
- (void)vcHasCompleteAppear:(id)a0;
- (void)correctSelectedIndexIfNeededWithScrollView:(id)a0;
- (void)vcHasCompleteDisappear:(id)a0;
- (void)_makeControllersDidAppear;
- (Class)scrollViewClass;
- (void)addViewController:(id)a0 atIndex:(long long)a1;
- (void)updateScrollIndexControllerWithTransitionType:(long long)a0 index:(long long)a1;
- (void)_makeViewControllerVisibleAtIndex:(long long)a0 transitionType:(long long)a1;
- (void)useSwipeCardEffect;
- (void)_makeControllersWillAppearAtPreIndex:(long long)a0 currentIndex:(long long)a1;
- (void)updateSelectedIndexWithScrollView:(id)a0;
- (id)currentViewControllers;
- (long long)currentScrollPage;
- (void)enumerateChildViewControllers:(id)a0 usingBlock:(id /* block */)a1;
- (void)replaceViewController:(id)a0 atIndex:(long long)a1;
- (void)insertAtFrontWithViewController:(id)a0;
- (void)appendViewController:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)visibleViews;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void)setupContentView;
- (void)reloadViewControllers;

@end
