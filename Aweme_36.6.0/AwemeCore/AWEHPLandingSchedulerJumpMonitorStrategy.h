@class AWEHPLandingSchedulerJumpMonitorStrategyContext;

@interface AWEHPLandingSchedulerJumpMonitorStrategy : NSObject

@property (retain, nonatomic) AWEHPLandingSchedulerJumpMonitorStrategyContext *context;

- (void)sendMonitorWithStatus:(long long)a0 realDiffTabCount:(long long)a1 realDiffJumpCount:(long long)a2 recordIndex:(long long)a3;
- (void).cxx_destruct;
- (BOOL)execute;
- (id)initWithContext:(id)a0;

@end
