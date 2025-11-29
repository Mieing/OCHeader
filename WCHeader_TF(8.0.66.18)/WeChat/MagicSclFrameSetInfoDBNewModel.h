@class NSString;

@interface MagicSclFrameSetInfoDBNewModel : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *bizName;
@property (copy, nonatomic) NSString *frameSetName;
@property (copy, nonatomic) NSString *frameSetRootPath;
@property (nonatomic) int frameSetHeight;
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
+ (const void *)bizName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_bizName;
+ (const void *)frameSetName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_frameSetName;
+ (const void *)frameSetRootPath;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_frameSetRootPath;
+ (const void *)frameSetHeight;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_frameSetHeight;
+ (void)__wcdb_index_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;
+ (void)__wcdb_index_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;

- (void).cxx_destruct;

@end
