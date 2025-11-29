@class NSString;

@interface HMDNetTrafficSourceUsageModel : NSObject

@property (copy, nonatomic) NSString *souceId;
@property (nonatomic) long long executeCount;
@property (nonatomic) long long resetTimestamp;
@property (nonatomic) unsigned long long usageBytes;
@property (copy, nonatomic) NSString *business;
@property (nonatomic) unsigned long long totalUsage;
@property (nonatomic) unsigned long long wifiBackUsage;
@property (nonatomic) unsigned long long wifiFrontUsage;
@property (nonatomic) unsigned long long mobileBackUsage;
@property (nonatomic) unsigned long long mobileFrontUsage;

+ (id)formatNormalUsageInfosToStoredDicts:(id)a0;
+ (id)formatHighFreqUsageInfosToStoredDicts:(id)a0;

- (id)initWithSourceId:(id)a0 business:(id)a1;
- (void)addTrafficUsage:(unsigned long long)a0 netType:(unsigned long long)a1;
- (unsigned long long)trafficUsageWithNetType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
