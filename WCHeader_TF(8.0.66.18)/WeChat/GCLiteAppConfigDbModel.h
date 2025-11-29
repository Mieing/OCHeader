@class NSString;

@interface GCLiteAppConfigDbModel : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasLiteConf;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *pkgId;
@property (nonatomic) unsigned int expireDuration;
@property (nonatomic) unsigned int refreshDuration;
@property (nonatomic) double updateTime;
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
+ (const void *)url;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_url;
+ (const void *)hasLiteConf;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_hasLiteConf;
+ (const void *)appid;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_appid;
+ (const void *)path;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_path;
+ (const void *)pkgId;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_pkgId;
+ (const void *)expireDuration;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_expireDuration;
+ (const void *)refreshDuration;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_refreshDuration;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_updateTime;
+ (void)__wcdb_column_constraint_9:(void *)a0;

- (BOOL)isExpired;
- (void).cxx_destruct;

@end
