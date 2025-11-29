@class NSString;

@interface HMDTrackerRecord : NSObject <HMDRecordStoreObject>

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (nonatomic) unsigned long long enableUpload;
@property (nonatomic) double restartInterval;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) long long netQualityType;
@property (copy, nonatomic) NSString *diagnosingKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanupWeight;
+ (id)tableName;
+ (id)newRecord;

- (id)environmentInfo;
- (void)recoverWithSessionRecord:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)reportDictionary;

@end
