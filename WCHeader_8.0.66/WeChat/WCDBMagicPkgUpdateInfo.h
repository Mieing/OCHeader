@class NSString;

@interface WCDBMagicPkgUpdateInfo : NSObject

@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *pkgPath;
@property (retain, nonatomic) NSString *unZipPath;
@property (retain, nonatomic) NSString *originalName;
@property (retain, nonatomic) NSString *wxaPath;
@property (nonatomic) unsigned int pkgType;
@property (retain, nonatomic) NSString *patchId;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int lastUseTime;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_pkgId;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_url;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_md5;
+ (const void *)pkgPath;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_pkgPath;
+ (const void *)unZipPath;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_unZipPath;
+ (const void *)originalName;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_originalName;
+ (const void *)wxaPath;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_wxaPath;
+ (const void *)pkgType;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_pkgType;
+ (const void *)patchId;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_patchId;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_version;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)lastUseTime;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_lastUseTime;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_index_13:(void *)a0;

- (id)description;
- (void).cxx_destruct;

@end
