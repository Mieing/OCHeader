@class LynxGestureConsumer, NSArray, NSString, UIScrollView, UIView, LynxUI;
@protocol AWEECFoldViewProtocol;

@interface AWEECLynxFoldView : UIScrollView <UIScrollViewDelegate>

@property (nonatomic) double threshold;
@property (weak, nonatomic) id<AWEECFoldViewProtocol> uiDelegate;
@property (weak, nonatomic) LynxUI *potentialRootScrollableLynxUI;
@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (nonatomic) BOOL allowNestScrollViewBounces;
@property (weak, nonatomic) UIView *tabbarView;
@property (weak, nonatomic) UIView *slotDragView;
@property (nonatomic) double expandHeight;
@property (nonatomic) BOOL duringKVO;
@property (nonatomic) BOOL duringDidScroll;
@property (nonatomic) double limitedContentOffsetY;
@property (nonatomic) double nestLimitedContentOffsetY;
@property (nonatomic) BOOL scrollAttached;
@property (nonatomic) BOOL forceScrollDetach;
@property (nonatomic) BOOL forceScrollDetachWhileIdling;
@property (nonatomic) double scrollViewFilter;
@property (retain, nonatomic) NSArray *excludeScrollViewNames;
@property (retain, nonatomic) LynxGestureConsumer *gestureConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFold;
- (BOOL)checkBlockList:(id)a0;
- (BOOL)checkAllowList:(id)a0;
- (BOOL)checkVisibleVerticalScrollView:(id)a0;
- (BOOL)checkNestedScrollView:(id)a0;
- (id)findNestedScrollView:(id)a0;
- (void)observeValue:(id)a0 ofObject:(id)a1;
- (BOOL)checkAttached;
- (void)clearNestedScrollView;
- (BOOL)isFullyExpand;
- (void)foldviewScrollsToTop;
- (void)adjustContentOffset;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
