@class UIScrollView, NSString, BDPLoadingAnimationView;

@interface BDPPullDownRefreshView : UIView <BDPScrollPanGestureDelegate> {
    BOOL _isUserPullAndRefresh;
    NSString *_observeToken;
    BDPLoadingAnimationView *_animationView;
}

@property (nonatomic) int state;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double pullRefreshLoadingHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserve;
- (void)removeObserve:(id)a0;
- (void)enablePullToRefreshWithStyle:(id)a0;
- (BOOL)scrollView:(id)a0 systemShouldHandlePanGesture:(id)a1;
- (void)scrollView:(id)a0 handlePanGesture:(id)a1;
- (void)triggerForceRefresh;
- (void).cxx_destruct;
- (id)init;
- (void)stopAnimation:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (void)willMoveToSuperview:(id)a0;

@end
