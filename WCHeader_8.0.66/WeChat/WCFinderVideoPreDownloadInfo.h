@class NSString;

@interface WCFinderVideoPreDownloadInfo : NSObject

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long videoIndex;
@property (retain, nonatomic) NSString *videoFlag;
@property (retain, nonatomic) NSString *mediaIdentifier;
@property (nonatomic) unsigned long long preloadSize;
@property (nonatomic) unsigned long long videoTotalSize;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) BOOL isMinBytesComplete;
@property (nonatomic) BOOL isIdleMonitorTask;
@property (nonatomic) unsigned long long cacheTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)videoIndex;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_videoIndex;
+ (const void *)videoFlag;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_videoFlag;
+ (const void *)preloadSize;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_preloadSize;
+ (const void *)videoTotalSize;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_videoTotalSize;
+ (const void *)isComplete;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_isComplete;
+ (const void *)isMinBytesComplete;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_isMinBytesComplete;
+ (const void *)isIdleMonitorTask;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_isIdleMonitorTask;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)mediaIdentifier;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_mediaIdentifier;
+ (void)__wcdb_table_constraint_10:(void *)a0;
+ (void)__wcdb_table_constraint_11:(void *)a0;
+ (void)__wcdb_index_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;

- (BOOL)isPreloadComplete;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
