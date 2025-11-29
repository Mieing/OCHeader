@class NSString;

@interface WCDBStarGuideRecord : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) long long scene;
@property (nonatomic) unsigned long long updatedTime;
@property (nonatomic) long long displayTimes;
@property (nonatomic) long long clickTimes;
@property (nonatomic) BOOL isLocal;
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
+ (const void *)feedID;
+ (const void *)__wcdb_synthesize_133:(void *)a0;
+ (id)swift_feedID;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_134:(void *)a0;
+ (id)swift_scene;
+ (const void *)updatedTime;
+ (const void *)__wcdb_synthesize_135:(void *)a0;
+ (id)swift_updatedTime;
+ (const void *)displayTimes;
+ (const void *)__wcdb_synthesize_136:(void *)a0;
+ (id)swift_displayTimes;
+ (const void *)clickTimes;
+ (const void *)__wcdb_synthesize_137:(void *)a0;
+ (id)swift_clickTimes;
+ (const void *)isLocal;
+ (const void *)__wcdb_synthesize_138:(void *)a0;
+ (id)swift_isLocal;
+ (void)__wcdb_column_constraint_139:(void *)a0;
+ (void)__wcdb_column_constraint_140:(void *)a0;
+ (void)__wcdb_column_constraint_141:(void *)a0;
+ (void)__wcdb_column_constraint_142:(void *)a0;
+ (void)__wcdb_column_constraint_143:(void *)a0;
+ (void)__wcdb_column_constraint_144:(void *)a0;
+ (void)__wcdb_table_constraint_145:(void *)a0;
+ (void)__wcdb_table_constraint_146:(void *)a0;
+ (void)__wcdb_index_147:(void *)a0;

- (void).cxx_destruct;

@end
