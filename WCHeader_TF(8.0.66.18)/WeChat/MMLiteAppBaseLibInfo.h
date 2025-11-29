@class NSString;

@interface MMLiteAppBaseLibInfo : MMObject <WCTTableCoding, NSCopying>

@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSString *baseId;
@property (retain, nonatomic) NSString *pId;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *signatrueKey;
@property (nonatomic) unsigned long long updateTime;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int ilinkVersion;
@property (retain, nonatomic) NSString *version;
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
+ (const void *)majorVersion;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_majorVersion;
+ (const void *)baseId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_baseId;
+ (const void *)pId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_pId;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_type;
+ (const void *)signatrueKey;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_signatrueKey;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_updateTime;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_md5;
+ (const void *)ilinkVersion;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_ilinkVersion;
+ (const void *)version;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_version;
+ (void)__wcdb_column_constraint_9:(void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isDebug;
- (void).cxx_destruct;

@end
