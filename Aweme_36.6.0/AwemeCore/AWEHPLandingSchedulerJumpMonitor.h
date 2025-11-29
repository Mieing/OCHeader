@class AWEHPLandingScheduledModel, AWEHPLandingSchedulerJumpMonitorConfig;

@interface AWEHPLandingSchedulerJumpMonitor : NSObject

@property (retain, nonatomic) AWEHPLandingScheduledModel *tabModel;
@property (retain, nonatomic) AWEHPLandingSchedulerJumpMonitorConfig *config;

+ (void)startMonitorWithContext:(id)a0;

- (id)initWithTabModel:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (void)start;

@end
