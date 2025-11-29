@class NSString;

@interface MMFinderLiveReplayStopgapPreloadRecord : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long stopgapId;
@property (nonatomic) unsigned int qualityLevel;
@property (retain, nonatomic) NSString *qualityTag;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) NSString *stopgapKey;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_liveId;
+ (const void *)stopgapId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_stopgapId;
+ (const void *)qualityLevel;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_qualityLevel;
+ (const void *)qualityTag;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_qualityTag;
+ (const void *)completed;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_completed;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
