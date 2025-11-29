@class NSString;

@interface WALocalStorageMainInfo : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long storageLength;
@property (nonatomic) unsigned int lastModifyTime;
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
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_appID;
+ (const void *)storageLength;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_storageLength;
+ (const void *)lastModifyTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_lastModifyTime;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
