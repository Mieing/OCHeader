@class NSString;

@interface WePkgGlobalConfigTable : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *pkgId;
@property (nonatomic) unsigned int lastCheckUpdateTimestamp;
@property (retain, nonatomic) NSString *lastCheckUpdateVersion;
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
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_pkgId;
+ (const void *)lastCheckUpdateTimestamp;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lastCheckUpdateTimestamp;
+ (const void *)lastCheckUpdateVersion;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_lastCheckUpdateVersion;
+ (void)__wcdb_column_constraint_3:(void *)a0;

- (void).cxx_destruct;

@end
