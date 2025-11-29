@class NSString;

@interface WebStorageGlobalConfigTable : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *weightStr;
@property (nonatomic) unsigned int realWeight;
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
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_appId;
+ (const void *)weightStr;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_weightStr;
+ (const void *)realWeight;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_realWeight;
+ (void)__wcdb_table_constraint_3:(void *)a0;
+ (void)__wcdb_table_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
