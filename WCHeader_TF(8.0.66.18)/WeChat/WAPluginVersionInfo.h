@class NSString;

@interface WAPluginVersionInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *customVersion;
@property (retain, nonatomic) NSString *packageCheckSum;
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
+ (const void *)version;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_version;
+ (const void *)customVersion;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_customVersion;
+ (const void *)packageCheckSum;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_packageCheckSum;
+ (void)__wcdb_table_constraint_4:(void *)a0;
+ (void)__wcdb_table_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
