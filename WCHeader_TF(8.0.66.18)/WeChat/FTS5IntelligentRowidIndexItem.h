@class NSString;

@interface FTS5IntelligentRowidIndexItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) long long indexRowid;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int validFlag;
@property (nonatomic) unsigned int hasDownLoadFlag;
@property (nonatomic) unsigned int operateTime;
@property (nonatomic) unsigned int ocrTime;
@property (nonatomic) unsigned int classificationTime;
@property (nonatomic) unsigned int faceClusterTime;
@property (nonatomic) unsigned int operateCost;
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
+ (const void *)__wcdb_synthesize_121:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_122:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_123:(void *)a0;
+ (id)swift_indexRowid;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_124:(void *)a0;
+ (id)swift_createTime;
+ (const void *)validFlag;
+ (const void *)__wcdb_synthesize_125:(void *)a0;
+ (id)swift_validFlag;
+ (const void *)hasDownLoadFlag;
+ (const void *)__wcdb_synthesize_126:(void *)a0;
+ (id)swift_hasDownLoadFlag;
+ (const void *)operateTime;
+ (const void *)__wcdb_synthesize_127:(void *)a0;
+ (id)swift_operateTime;
+ (const void *)ocrTime;
+ (const void *)__wcdb_synthesize_128:(void *)a0;
+ (id)swift_ocrTime;
+ (const void *)classificationTime;
+ (const void *)__wcdb_synthesize_129:(void *)a0;
+ (id)swift_classificationTime;
+ (const void *)faceClusterTime;
+ (const void *)__wcdb_synthesize_130:(void *)a0;
+ (id)swift_faceClusterTime;
+ (const void *)operateCost;
+ (const void *)__wcdb_synthesize_131:(void *)a0;
+ (id)swift_operateCost;
+ (void)__wcdb_table_constraint_132:(void *)a0;
+ (void)__wcdb_table_constraint_133:(void *)a0;
+ (void)__wcdb_index_134:(void *)a0;
+ (void)__wcdb_index_135:(void *)a0;
+ (void)__wcdb_index_136:(void *)a0;
+ (void)__wcdb_index_137:(void *)a0;
+ (void)__wcdb_table_constraint_138:(void *)a0;


@end
