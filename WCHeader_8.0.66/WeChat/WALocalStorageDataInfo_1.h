@class NSString;

@interface WALocalStorageDataInfo_1 : NSObject <WCTTableCoding>

@property (nonatomic) int storageId;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned int keyAndDataLength;
@property (nonatomic) unsigned int lastModifyTime;
@property (retain, nonatomic) NSString *dataType;
@property (retain, nonatomic) NSString *data;
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
+ (const void *)storageId;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_storageId;
+ (const void *)key;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_key;
+ (const void *)keyAndDataLength;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_keyAndDataLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_lastModifyTime;
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_dataType;
+ (const void *)data;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (id)swift_data;
+ (void)__wcdb_table_constraint_16:(void *)a0;
+ (void)__wcdb_table_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_18:(void *)a0;

- (void).cxx_destruct;

@end
