@class NSString, WebStorageConfigExt;

@interface WebStorageConfigTable : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned int valueSize;
@property (nonatomic) unsigned int expireTimestamp;
@property (nonatomic) unsigned int lastModifyTime;
@property (retain, nonatomic) NSString *weightStr;
@property (retain, nonatomic) WebStorageConfigExt *ext;
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
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_appId;
+ (const void *)key;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_key;
+ (const void *)valueSize;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_valueSize;
+ (const void *)expireTimestamp;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_expireTimestamp;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_lastModifyTime;
+ (const void *)weightStr;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_weightStr;
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_ext;
+ (void)__wcdb_table_constraint_12:(void *)a0;
+ (void)__wcdb_table_constraint_13:(void *)a0;

- (void).cxx_destruct;

@end
