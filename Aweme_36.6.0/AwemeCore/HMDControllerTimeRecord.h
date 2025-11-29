@class NSString;

@interface HMDControllerTimeRecord : NSObject <HMDRecordStoreObject>

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic) double inAppTime;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic) double timeInterval;
@property (nonatomic) unsigned long long isReported;
@property (nonatomic) unsigned long long isFirstOpen;
@property (nonatomic) unsigned long long enableUpload;
@property (nonatomic) long long netQualityType;
@property (copy, nonatomic) NSString *diagnosingKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanupWeight;
+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)init;
- (id)reportDictionary;

@end
