@class NSString;

@interface WCFinderMegaVideoFirstPageCacheInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) unsigned long long cacheIndex;
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
+ (const void *)videoId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_videoId;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_username;
+ (const void *)pageType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_pageType;
+ (const void *)cacheIndex;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_cacheIndex;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;

- (void).cxx_destruct;

@end
