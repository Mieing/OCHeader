@class NSString, WePkgNonAtomicSingleFileConfigExt;

@interface WePkgNonAtomicSingleFileConfigTable : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int pkgType;
@property (retain, nonatomic) NSString *entranceDomain;
@property (retain, nonatomic) NSString *currentEnabledVersion;
@property (retain, nonatomic) NSString *charSet;
@property (retain, nonatomic) WePkgNonAtomicSingleFileConfigExt *ext;
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
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_appId;
+ (const void *)pkgType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_pkgType;
+ (const void *)entranceDomain;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_entranceDomain;
+ (const void *)currentEnabledVersion;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_currentEnabledVersion;
+ (const void *)charSet;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_charSet;
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_ext;
+ (void)__wcdb_column_constraint_7:(void *)a0;

- (void).cxx_destruct;

@end
