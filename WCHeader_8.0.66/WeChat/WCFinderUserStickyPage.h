@class NSString;

@interface WCFinderUserStickyPage : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long stickyTime;
@property (nonatomic) long long type;
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
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_username;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_tid;
+ (const void *)stickyTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_stickyTime;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_type;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;

- (void).cxx_destruct;

@end
