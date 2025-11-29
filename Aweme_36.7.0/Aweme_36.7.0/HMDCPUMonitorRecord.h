@class NSDictionary, NSString;

@interface HMDCPUMonitorRecord : HMDMonitorRecord

@property (nonatomic) double totalUsage;
@property (nonatomic) double systemUsage;
@property (nonatomic) double userUsage;
@property (nonatomic) double appUsage;
@property (nonatomic) double nice;
@property (nonatomic) double idle;
@property (nonatomic) double gpu;
@property (nonatomic) unsigned long long isBackground;
@property (retain, nonatomic) NSDictionary *threadDict;
@property (copy, nonatomic) NSString *service;

+ (id)aggregateDataWithRecords:(id)a0;
+ (id)aggregateCPURecords:(id)a0;
+ (id)aggregateCPUThreadRecords:(id)a0;

- (void).cxx_destruct;
- (double)value;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reportDictionary;

@end
