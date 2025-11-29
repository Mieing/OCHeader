@class NSString;

@interface WAUsageInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int lastOpenTime;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_userName;
+ (const void *)appType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_appType;
+ (const void *)lastOpenTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_lastOpenTime;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;

- (void).cxx_destruct;

@end
