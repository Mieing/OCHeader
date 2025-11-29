@class NSString, NSDictionary;

@interface HMDTTMonitorRecord : NSObject <HMDRecordStoreObject>

@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *log_type;
@property (copy, nonatomic) NSDictionary *extra_values;
@property (nonatomic) BOOL isHighPriority;
@property (nonatomic) unsigned long long needUpload;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) long long customTag;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) long long networkType;
@property (nonatomic) long long netQualityType;
@property (copy, nonatomic) NSString *traceParent;
@property (nonatomic) long long singlePointOnly;
@property (nonatomic) unsigned long long localID;
@property (nonatomic) long long uniqueCode;
@property (copy, nonatomic) NSString *log_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)init;
- (id)reportDictionary;

@end
