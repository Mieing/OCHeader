@class NSString;

@interface MMLiveBeautyResourcePackageRecord : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *recordId;
@property (nonatomic) unsigned long long schemaVersion;
@property (nonatomic) unsigned long long packageType;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *md5Hash;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned long long lastUpdated;
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
+ (const void *)recordId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_recordId;
+ (const void *)schemaVersion;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_schemaVersion;
+ (const void *)packageType;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_packageType;
+ (const void *)uri;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_uri;
+ (const void *)md5Hash;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_md5Hash;
+ (const void *)instanceId;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_instanceId;
+ (const void *)lastUpdated;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_lastUpdated;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (id)recordIdWithScopeId:(id)a0 packageType:(unsigned long long)a1;
+ (id)recordFromPackage:(id)a0 scopeId:(id)a1;
+ (id)packageFromRecord:(id)a0;

- (void).cxx_destruct;

@end
