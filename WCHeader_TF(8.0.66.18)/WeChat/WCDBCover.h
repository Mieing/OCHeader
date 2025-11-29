@class NSString, NSData;

@interface WCDBCover : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSData *buffer;
@property (nonatomic) int codingType;
@property (nonatomic) long long snsCoverOffset;
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
+ (const void *)username;
+ (const void *)__wcdb_synthesize_66:(void *)a0;
+ (id)swift_username;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_67:(void *)a0;
+ (id)swift_tid;
+ (const void *)buffer;
+ (const void *)__wcdb_synthesize_68:(void *)a0;
+ (id)swift_buffer;
+ (const void *)codingType;
+ (const void *)__wcdb_synthesize_69:(void *)a0;
+ (id)swift_codingType;
+ (const void *)snsCoverOffset;
+ (const void *)__wcdb_synthesize_70:(void *)a0;
+ (id)swift_snsCoverOffset;
+ (void)__wcdb_column_constraint_71:(void *)a0;
+ (void)__wcdb_column_constraint_72:(void *)a0;
+ (void)__wcdb_column_constraint_73:(void *)a0;
+ (void)__wcdb_column_constraint_74:(void *)a0;
+ (void)__wcdb_column_constraint_75:(void *)a0;
+ (void)__wcdb_column_constraint_76:(void *)a0;

- (void).cxx_destruct;

@end
