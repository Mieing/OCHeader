@interface IESLLRefreshFooter : MJRefreshFooter

@property (nonatomic) BOOL newPanGesture;
@property (nonatomic) BOOL needBounces;
@property (nonatomic) BOOL forbidTriggerLoadMore;
@property (nonatomic) BOOL triggerAtTracking;
@property (nonatomic) long long mj_insetBResetedOffset;

- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)setHiddenAndUpdateLayout:(BOOL)a0;
- (void)_updateScrollViewInsetBottomAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_resetScrollViewInsetBottomAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)scrollViewContentHeightBiggerThanFrameHeight;
- (BOOL)scrollViewDidReachBottom;
- (BOOL)scrollViewDidScrollUp;
- (void)endRefreshingWithNoMoreDataCompletionBlock:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
