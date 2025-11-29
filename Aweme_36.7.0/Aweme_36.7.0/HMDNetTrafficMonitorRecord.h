@class NSString, NSMutableArray, NSDictionary;

@interface HMDNetTrafficMonitorRecord : HMDMonitorRecord

@property (nonatomic) unsigned int resetTimes;
@property (nonatomic) unsigned int wifiSent;
@property (nonatomic) unsigned int wifiReceived;
@property (nonatomic) unsigned int cellularSent;
@property (nonatomic) unsigned int cellularReceived;
@property (nonatomic) unsigned int totalSent;
@property (nonatomic) unsigned int totalReceived;
@property (nonatomic) unsigned int total;
@property (nonatomic) unsigned int pageSent;
@property (nonatomic) unsigned int pageReceived;
@property (nonatomic) unsigned int pageTotal;
@property (nonatomic) BOOL isTenMinRecord;
@property (nonatomic) unsigned long long tenMinUsage;
@property (nonatomic) unsigned long long wifiTenMinUsage;
@property (nonatomic) unsigned long long cellularTenMinUsage;
@property (nonatomic) unsigned long long cellularTenMinusage;
@property (copy, nonatomic) NSString *frontType;
@property (copy, nonatomic) NSString *netType;
@property (nonatomic) BOOL isCustomSpan;
@property (nonatomic) BOOL isExceptionTraffic;
@property (retain, nonatomic) NSMutableArray *exceptionTypes;
@property (copy, nonatomic) NSDictionary *trafficDetail;
@property (copy, nonatomic) NSDictionary *customExtraValue;
@property (copy, nonatomic) NSDictionary *customExtraStatus;
@property (copy, nonatomic) NSDictionary *customExtra;

+ (unsigned long long)cleanupWeight;
+ (id)aggregateDataWithRecords:(id)a0;
+ (id)bg_ignoreKeys;
+ (id)aggregateExceptionTrafficDataWithRecords:(id)a0;
+ (id)intervalTrafficUsageReportDictWithRecord:(id)a0 logType:(id)a1;
+ (id)newRecordWithFrontType:(id)a0 netType:(id)a1;

- (BOOL)needAggregate;
- (id)exceptionTrafficDictionary;
- (void).cxx_destruct;
- (double)value;
- (id)reportDictionary;
- (id)reportDictionary;

@end
