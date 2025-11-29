@class NSString, NSDictionary, AWEAwemeModel, AWEAwemeFeedPreCacheModel;

@interface AWEOfflineVideoCenterAwemeDBModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *awemeModelDictionary;
@property (retain, nonatomic) AWEAwemeFeedPreCacheModel *preCacheModel;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)ss_itemID;
+ (const void *)awemeModelDictionary;
+ (const void *)preCacheModel;
+ (const void *)ss_model;
+ (const void *)ss_awemeModelDictionary;
+ (const void *)ss_preCacheModel;
+ (void)__wcdb_column_constraint_1:(void *)a0;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (id)swift_ss_itemID;
+ (id)swift_ss_model;
+ (id)swift_ss_awemeModelDictionary;
+ (id)swift_ss_preCacheModel;
+ (const void *)model;
+ (const void *)itemID;
+ (const void *)allProperties;

- (id)awemeModel;
- (id)initWithAwemeModel:(id)a0;
- (id)awemeModelDictionaryToModel;
- (void).cxx_destruct;

@end
