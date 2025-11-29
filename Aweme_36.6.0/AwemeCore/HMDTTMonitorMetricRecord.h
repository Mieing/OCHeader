@class NSString;

@interface HMDTTMonitorMetricRecord : NSObject <HMDRecordStoreObject>

@property (nonatomic) unsigned long long localID;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double inAppTime;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double value;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long needAggr;
@property (nonatomic) unsigned long long metricType;
@property (copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)init;

@end
