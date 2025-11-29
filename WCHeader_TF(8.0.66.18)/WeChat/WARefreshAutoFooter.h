@interface WARefreshAutoFooter : WARefreshFooter

@property (nonatomic, getter=isAutomaticallyRefresh) BOOL automaticallyRefresh;
@property (nonatomic) double triggerAutomaticallyRefreshPercent;

- (void)willMoveToSuperview:(id)a0;
- (BOOL)adjustContentInset;
- (void)prepare;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)setState:(long long)a0;
- (void)setHidden:(BOOL)a0;

@end
