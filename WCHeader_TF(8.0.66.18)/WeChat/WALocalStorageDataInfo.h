@class NSString;

@interface WALocalStorageDataInfo : NSObject <WCTTableCoding>

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
+ (const void *)key;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_key;
+ (const void *)keyAndDataLength;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_keyAndDataLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_lastModifyTime;
+ (const void *)dataType;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_dataType;
+ (const void *)data;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_data;
+ (void)__wcdb_column_constraint_9:(void *)a0;

- (void).cxx_destruct;

@end
