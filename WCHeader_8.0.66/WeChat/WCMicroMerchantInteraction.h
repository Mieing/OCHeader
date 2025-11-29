@class NSString;

@interface WCMicroMerchantInteraction : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long interactionTime;
@property (nonatomic) BOOL isFoldInteraction;
@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) unsigned long long scene;
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
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_117:(void *)a0;
+ (id)swift_tid;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_118:(void *)a0;
+ (id)swift_username;
+ (const void *)interactionTime;
+ (const void *)__wcdb_synthesize_119:(void *)a0;
+ (id)swift_interactionTime;
+ (const void *)isFoldInteraction;
+ (const void *)__wcdb_synthesize_120:(void *)a0;
+ (id)swift_isFoldInteraction;
+ (const void *)interactionType;
+ (const void *)__wcdb_synthesize_121:(void *)a0;
+ (id)swift_interactionType;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_122:(void *)a0;
+ (id)swift_scene;
+ (void)__wcdb_column_constraint_123:(void *)a0;
+ (void)__wcdb_column_constraint_124:(void *)a0;
+ (void)__wcdb_column_constraint_125:(void *)a0;
+ (void)__wcdb_column_constraint_126:(void *)a0;
+ (void)__wcdb_column_constraint_127:(void *)a0;
+ (void)__wcdb_index_128:(void *)a0;
+ (void)__wcdb_index_129:(void *)a0;
+ (void)__wcdb_index_130:(void *)a0;
+ (void)__wcdb_index_131:(void *)a0;
+ (void)__wcdb_index_132:(void *)a0;

- (void).cxx_destruct;

@end
