@class NSString, NSDictionary, HMDUITrackableContext;

@interface HMDUITrackRecord : NSObject <HMDRecordStoreObject>

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (nonatomic) double inAppTime;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (weak, nonatomic) HMDUITrackableContext *context;
@property (nonatomic) unsigned long long enableUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanupWeight;
+ (id)bg_ignoreKeys;
+ (id)tableName;
+ (id)newRecord;

- (void).cxx_destruct;
- (id)init;
- (id)reportDictionary;

@end
