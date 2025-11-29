@class NSString;

@interface WCDBFinderShareRecord : NSObject <WCTTableCoding>

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
+ (const void *)__wcdb_synthesize_148:(void *)a0;
+ (id)swift_feedID;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_149:(void *)a0;
+ (id)swift_scene;
+ (const void *)updatedTime;
+ (const void *)__wcdb_synthesize_150:(void *)a0;
+ (id)swift_updatedTime;
+ (const void *)displayTimes;
+ (const void *)__wcdb_synthesize_151:(void *)a0;
+ (id)swift_displayTimes;
+ (const void *)clickTimes;
+ (const void *)__wcdb_synthesize_152:(void *)a0;
+ (id)swift_clickTimes;
+ (const void *)isLocal;
+ (const void *)__wcdb_synthesize_153:(void *)a0;
+ (id)swift_isLocal;
+ (void)__wcdb_column_constraint_154:(void *)a0;
+ (void)__wcdb_column_constraint_155:(void *)a0;
+ (void)__wcdb_column_constraint_156:(void *)a0;
+ (void)__wcdb_column_constraint_157:(void *)a0;
+ (void)__wcdb_column_constraint_158:(void *)a0;
+ (void)__wcdb_column_constraint_159:(void *)a0;
+ (void)__wcdb_table_constraint_160:(void *)a0;
+ (void)__wcdb_table_constraint_161:(void *)a0;
+ (void)__wcdb_index_162:(void *)a0;

- (void).cxx_destruct;

@end
