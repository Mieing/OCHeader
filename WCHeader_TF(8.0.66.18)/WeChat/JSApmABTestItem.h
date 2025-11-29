@interface JSApmABTestItem : NSObject <IExptServiceExt>

@property (nonatomic) long long watchdogLimit;
@property (nonatomic) long long cpuUsageLimit;
@property (nonatomic) long long cpuDurationLimit;
@property (nonatomic) unsigned long long tickCountLimit;
@property (nonatomic) long long ver;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL watchdogEnabled;
@property (nonatomic) BOOL powerEnabled;
@property (nonatomic) BOOL mainThreadEnabled;
@property (nonatomic) BOOL runLoopLongTaskEnabled;
@property (nonatomic) BOOL runLoopHangEnabled;
@property (nonatomic) long long runLoopCheckPeriod;
@property (nonatomic) long long runLoopLongTaskThreshold;
@property (nonatomic) long long runLoopHangThreshold;

- (id)keyWith:(id)a0;
- (BOOL)boolForKey:(id)a0 valeIfUndefined:(BOOL)a1;
- (BOOL)isEnable:(id)a0 valeIfUndefined:(BOOL)a1;
- (BOOL)boolWithKey:(id)a0 undef:(BOOL)a1;
- (long long)integerWithKey:(id)a0 undef:(long long)a1;
- (void)setup;
- (id)description;

@end
