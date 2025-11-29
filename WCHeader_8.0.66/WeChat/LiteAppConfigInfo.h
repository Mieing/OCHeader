@class NSString;

@interface LiteAppConfigInfo : MMObject <WCTTableCoding, NSCopying>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *signatrueKey;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *packageConfigPath;
@property (retain, nonatomic) NSString *dynamicConfigPath;
@property (retain, nonatomic) NSString *configJson;
@property (nonatomic) unsigned int ilinkVersion;
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
+ (const void *)signatrueKey;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_signatrueKey;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_md5;
+ (const void *)packageConfigPath;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_packageConfigPath;
+ (const void *)dynamicConfigPath;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_dynamicConfigPath;
+ (const void *)configJson;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_configJson;
+ (const void *)ilinkVersion;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_ilinkVersion;
+ (void)__wcdb_column_constraint_8:(void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
