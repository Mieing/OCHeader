@class NSString, WePkgRegularConfigExt;

@interface WePkgRegularConfigTable : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int pkgType;
@property (retain, nonatomic) NSString *entranceDomain;
@property (retain, nonatomic) WePkgRegularConfigExt *ext;
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
+ (const void *)ext;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_ext;
+ (void)__wcdb_column_constraint_5:(void *)a0;

- (void).cxx_destruct;

@end
