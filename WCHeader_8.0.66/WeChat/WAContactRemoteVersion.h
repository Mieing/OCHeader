@class NSString;

@interface WAContactRemoteVersion : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int lastVersion;
@property (nonatomic) unsigned int launchFallbackDirectlyMinVersion;
@property (nonatomic) unsigned int reportId;
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
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_userName;
+ (const void *)lastVersion;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_lastVersion;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_reportId;
+ (const void *)launchFallbackDirectlyMinVersion;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_launchFallbackDirectlyMinVersion;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
