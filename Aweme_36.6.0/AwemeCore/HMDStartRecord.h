@class NSString;

@interface HMDStartRecord : NSObject <HMDRecordStoreObject>

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (nonatomic) double timestamp;
@property (nonatomic) double timeInterval;
@property (nonatomic) unsigned long long enableUpload;
@property (nonatomic) long long netQualityType;
@property (nonatomic) BOOL prewarm;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *timeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanupWeight;
+ (id)tableName;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
