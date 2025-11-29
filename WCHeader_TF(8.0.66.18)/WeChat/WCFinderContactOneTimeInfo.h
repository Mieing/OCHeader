@class NSString;

@interface WCFinderContactOneTimeInfo : NSObject

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long oneTimeFlag;
@property (nonatomic) int entryScene;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) unsigned long long userFlag;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)oneTimeFlag;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_oneTimeFlag;
+ (const void *)entryScene;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_entryScene;
+ (const void *)commentScene;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_commentScene;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_cacheTime;
+ (const void *)userFlag;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_userFlag;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;

- (id)description;
- (void).cxx_destruct;

@end
