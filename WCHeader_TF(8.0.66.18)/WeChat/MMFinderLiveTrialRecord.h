@class NSString;

@interface MMFinderLiveTrialRecord : NSObject <WCTTableCoding>

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int remainTime;
@property (nonatomic) unsigned int trialLimitTime;
@property (nonatomic) unsigned int trialEndTime;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_liveId;
+ (const void *)remainTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_remainTime;
+ (const void *)trialEndTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_trialEndTime;
+ (const void *)trialLimitTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_trialLimitTime;
+ (void)__wcdb_column_constraint_4:(void *)a0;


@end
