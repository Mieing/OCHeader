@class NSString;

@interface DBMessage : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) long long msgServerId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int imageStatus;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int des;
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
+ (const void *)version;
+ (const void *)__wcdb_synthesize_49:(void *)a0;
+ (id)swift_version;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_50:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)msgServerId;
+ (const void *)__wcdb_synthesize_51:(void *)a0;
+ (id)swift_msgServerId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_52:(void *)a0;
+ (id)swift_createTime;
+ (const void *)message;
+ (const void *)__wcdb_synthesize_53:(void *)a0;
+ (id)swift_message;
+ (const void *)status;
+ (const void *)__wcdb_synthesize_54:(void *)a0;
+ (id)swift_status;
+ (const void *)imageStatus;
+ (const void *)__wcdb_synthesize_55:(void *)a0;
+ (id)swift_imageStatus;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_56:(void *)a0;
+ (id)swift_type;
+ (const void *)des;
+ (const void *)__wcdb_synthesize_57:(void *)a0;
+ (id)swift_des;
+ (void)__wcdb_column_constraint_58:(void *)a0;
+ (void)__wcdb_index_59:(void *)a0;
+ (void)__wcdb_index_60:(void *)a0;
+ (void)__wcdb_index_61:(void *)a0;
+ (void)__wcdb_index_62:(void *)a0;
+ (void)__wcdb_index_63:(void *)a0;
+ (void)__wcdb_index_64:(void *)a0;
+ (void)__wcdb_index_65:(void *)a0;
+ (void)__wcdb_index_66:(void *)a0;
+ (void)__wcdb_column_constraint_67:(void *)a0;
+ (void)__wcdb_column_constraint_68:(void *)a0;
+ (void)__wcdb_column_constraint_69:(void *)a0;
+ (void)__wcdb_column_constraint_70:(void *)a0;
+ (void)__wcdb_column_constraint_71:(void *)a0;

- (void).cxx_destruct;

@end
