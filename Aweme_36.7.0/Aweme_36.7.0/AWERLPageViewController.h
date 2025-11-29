@class NSArray, NSString, UIScrollView, NSMutableArray, UIViewController;
@protocol AWERLPageDataSource, AWERLPageDelegate;

@interface AWERLPageViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (nonatomic) BOOL appeared;
@property (copy, nonatomic) id /* block */ scrollAnimationCompletion;
@property (nonatomic) long long animatedScrollPV;
@property (readonly, nonatomic) UIViewController *selectedViewController;
@property (weak, nonatomic) id<AWERLPageDataSource> dataSource;
@property (weak, nonatomic) id<AWERLPageDelegate> delegate;
@property (readonly, nonatomic) NSArray *addedViewControllers;
@property (readonly, nonatomic) long long numberOfViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (id)__indexToViewController:(long long)a0;
- (void)__notifyWillAppear:(id)a0 animated:(BOOL)a1 byContainer:(BOOL)a2;
- (void)__notifyDidAppear:(id)a0 byContainer:(BOOL)a1;
- (void)__notifyWillDisappear:(id)a0 animated:(BOOL)a1 byContainer:(BOOL)a2;
- (void)__notifyDidDisappear:(id)a0 byContainer:(BOOL)a1;
- (void)__layoutScrollView:(struct CGSize { double x0; double x1; })a0;
- (id)__loadViewControllerAtIndexIfNeeded:(long long)a0 isNew:(BOOL *)a1;
- (void)__notifyDidSelectAtIndex:(long long)a0 actionType:(unsigned long long)a1;
- (void)__scrollToIndex:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)__notifyWillScrollToIndex:(long long)a0;
- (void)__balanceAllLifeStateWithSelectIndex:(long long)a0 animated:(BOOL)a1;
- (void)__notifyDidScrollToIndex:(long long)a0;
- (void)__onUserScrollEnd:(id)a0;
- (void)reloadDataWithSelectedIndex:(long long)a0;
- (BOOL)scrollToIndex:(long long)a0 animated:(BOOL)a1 actionType:(unsigned long long)a2;
- (long long)indexForViewController:(id)a0;
- (void)replaceViewController:(id)a0 atIndex:(long long)a1;
- (long long)__nextIndexForScrollView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)viewControllerAtIndex:(long long)a0;

@end
