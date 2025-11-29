@class NSArray, AWEHPLandingSchedulerJumpMonitorConditionConfig;

@interface AWEHPLandingSchedulerJumpMonitorStrategyContext : NSObject

@property (retain, nonatomic) AWEHPLandingSchedulerJumpMonitorConditionConfig *condition;
@property (retain, nonatomic) NSArray *records;
@property (nonatomic) double currentServerTime;

- (void).cxx_destruct;

@end
