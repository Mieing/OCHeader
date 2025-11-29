@class NSString, NSDictionary;

@interface HMDMonitorRecord : NSObject <HMDRecordStoreObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long localID;
@property unsigned long long sequenceCode;
@property (nonatomic) double timestamp;
@property double inAppTime;
@property unsigned long long isReported;
@property unsigned long long enableUpload;
@property long long netQualityType;
@property (retain) NSString *scene;
@property (retain) NSString *customScene;
@property (retain) NSString *business;
@property (retain) NSDictionary *filters;
@property (retain) NSDictionary *extraInfos;
@property (copy) NSString *sessionID;
@property (copy) NSString *updateVersionCode;
@property (copy) NSString *osVersion;
@property (copy) NSString *appVersion;
@property BOOL baseSample;
@property BOOL isSpecialSceneOpenRecord;
@property (copy) NSString *diagnosingKey;

+ (unsigned long long)cleanupWeight;
+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)aggregateDataWithRecords:(id)a0;
+ (id)getInjectedPatchFilters;
+ (id)tableName;
+ (id)newRecord;

- (BOOL)needAggregate;
- (long long)compare:(id)a0 forKeyPath:(id)a1;
- (void)addInfo;
- (void).cxx_destruct;
- (id)init;
- (double)value;
- (id)reportDictionary;

@end
