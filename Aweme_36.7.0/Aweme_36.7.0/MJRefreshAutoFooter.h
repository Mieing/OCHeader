@interface MJRefreshAutoFooter : MJRefreshFooter

@property (nonatomic, getter=isAutomaticallyRefresh) BOOL automaticallyRefresh;
@property (nonatomic) double appearencePercentTriggerAutoRefresh;
@property (nonatomic) double triggerAutomaticallyRefreshPercent;

- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)prepare;
- (void)setState:(long long)a0;
- (void)willMoveToSuperview:(id)a0;

@end
