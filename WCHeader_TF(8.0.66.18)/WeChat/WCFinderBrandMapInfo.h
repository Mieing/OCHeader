@class NSString;

@interface WCFinderBrandMapInfo : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *bizUsername;
@property (nonatomic) unsigned long long cacheTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)finderUsername;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_finderUsername;
+ (const void *)bizUsername;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_bizUsername;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_cacheTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (void)__wcdb_index_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;

- (void).cxx_destruct;

@end
