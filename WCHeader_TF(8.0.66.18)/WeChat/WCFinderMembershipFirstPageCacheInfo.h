@class NSString;

@interface WCFinderMembershipFirstPageCacheInfo : NSObject

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long pageType;
@property (nonatomic) unsigned long long cacheIndex;
@property (copy, nonatomic) NSString *collectionTopicId;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_username;
+ (const void *)pageType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_pageType;
+ (const void *)cacheIndex;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_cacheIndex;
+ (const void *)collectionTopicId;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_collectionTopicId;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_index_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;

- (void).cxx_destruct;

@end
