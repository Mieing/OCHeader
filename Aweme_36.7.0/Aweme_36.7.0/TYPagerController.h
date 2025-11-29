@class NSArray, NSString, UIScrollView, TYPagerViewLayout;
@protocol TYPagerControllerDelegate, TYPagerControllerDataSource;

@interface TYPagerController : UIViewController <TYPagerViewLayoutDataSource, TYPagerViewLayoutDelegate> {
    struct { unsigned char viewWillAppearForIndex : 1; unsigned char viewDidAppearForIndex : 1; unsigned char viewWillDisappearForIndex : 1; unsigned char viewDidDisappearForIndex : 1; unsigned char transitionFromIndexToIndex : 1; unsigned char transitionFromIndexToIndexProgress : 1; unsigned char viewDidScroll : 1; unsigned char viewWillBeginScrolling : 1; unsigned char viewDidEndScrolling : 1; } _delegateFlags;
}

@property (retain, nonatomic) TYPagerViewLayout *layout;
@property (weak, nonatomic) id<TYPagerControllerDataSource> dataSource;
@property (weak, nonatomic) id<TYPagerControllerDelegate> delegate;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long countOfControllers;
@property (readonly, nonatomic) long long curIndex;
@property (readonly, nonatomic) NSArray *visibleControllers;
@property (nonatomic) BOOL automaticallySystemManagerViewAppearanceMethods;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pagerViewLayout:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 animated:(BOOL)a3;
- (void)pagerViewLayout:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerViewLayoutDidScroll:(id)a0;
- (void)pagerViewLayoutWillBeginScrollToView:(id)a0 animate:(BOOL)a1;
- (void)pagerViewLayoutDidEndScrollToView:(id)a0 animate:(BOOL)a1;
- (void)pagerViewLayoutDidEndDecelerating:(id)a0;
- (void)pagerViewLayoutWillBeginDragging:(id)a0;
- (void)pagerViewLayoutDidEndScrollingAnimation:(id)a0;
- (void)scrollToControllerAtIndex:(long long)a0 animate:(BOOL)a1;
- (id)controllerForIndex:(long long)a0;
- (void)childViewController:(id)a0 BeginAppearanceTransition:(BOOL)a1 animated:(BOOL)a2;
- (void)childViewControllerEndAppearanceTransition:(id)a0;
- (void)willBeginScrollingAnimate:(BOOL)a0;
- (void)didEndScrollingAnimate:(BOOL)a0;
- (long long)numberOfItemsInPagerViewLayout;
- (id)pagerViewLayout:(id)a0 itemForIndex:(long long)a1 prefetching:(BOOL)a2;
- (id)pagerViewLayout:(id)a0 viewForItem:(id)a1 atIndex:(long long)a2;
- (void)pagerViewLayout:(id)a0 addVisibleItem:(id)a1 atIndex:(long long)a2;
- (void)pagerViewLayout:(id)a0 removeInVisibleItem:(id)a1 atIndex:(long long)a2;
- (id)pagerViewLayout:(id)a0 viewControllerForItem:(id)a1 atIndex:(long long)a2;
- (void)registerClass:(Class)a0 forControllerWithReuseIdentifier:(id)a1;
- (void)registerNib:(id)a0 forControllerWithReuseIdentifier:(id)a1;
- (id)dequeueReusableControllerWithReuseIdentifier:(id)a0 forIndex:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (void)updateData;

@end
