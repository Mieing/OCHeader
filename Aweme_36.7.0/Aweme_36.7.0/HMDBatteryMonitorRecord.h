@interface HMDBatteryMonitorRecord : HMDMonitorRecord

@property (nonatomic) long long batteryState;
@property (nonatomic) double batteryLevel;
@property (nonatomic) double pageUsage;
@property (nonatomic) double perMinuteUsage;
@property (nonatomic) double sessionUsage;

+ (unsigned long long)cleanupWeight;
+ (id)aggregateDataWithRecords:(id)a0;

- (double)value;
- (id)reportDictionary;

@end
