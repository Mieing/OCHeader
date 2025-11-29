@interface MMFinderLiveReplayWatchHistoryRecord : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int lastExitTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)liveId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_liveId;
+ (const void *)lastExitTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lastExitTime;
+ (void)__wcdb_column_constraint_2:(void *)a0;

@end
