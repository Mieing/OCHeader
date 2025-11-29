@interface AWEAppExitPredictMonitorConfig : NSObject

@property (nonatomic) BOOL enable_monitor;
@property (nonatomic) double enable_monitor_run_rate;
@property (nonatomic) long long real_next_count;

- (id)initWithDict:(id)a0;

@end
