@class NSString;

@interface FTS5IntelligentRowidIndexClassificationItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int classificationLabelId;
@property (nonatomic) unsigned int faceClusterFlag;
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
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_139:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_140:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)classificationLabelId;
+ (const void *)__wcdb_synthesize_141:(void *)a0;
+ (id)swift_classificationLabelId;
+ (const void *)faceClusterFlag;
+ (const void *)__wcdb_synthesize_142:(void *)a0;
+ (id)swift_faceClusterFlag;
+ (void)__wcdb_index_143:(void *)a0;
+ (void)__wcdb_index_144:(void *)a0;
+ (void)__wcdb_index_145:(void *)a0;


@end
