@class NSString, DBContactOpenIM, WWKFDBContactInfo;

@interface WWKFDBContactTable : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) WWKFDBContactInfo *dbContactInfo;
@property (retain, nonatomic) DBContactOpenIM *dbContactOpenIM;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned long long settingFlag;
@property (copy, nonatomic) NSString *headImageStatus;
@property (nonatomic) BOOL needLocation;
@property (retain, nonatomic) NSString *locationType;
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
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_appId;
+ (const void *)dbContactInfo;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_dbContactInfo;
+ (const void *)dbContactOpenIM;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_dbContactOpenIM;
+ (const void *)source;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_source;
+ (const void *)settingFlag;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_settingFlag;
+ (const void *)headImageStatus;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_headImageStatus;
+ (const void *)needLocation;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_needLocation;
+ (const void *)locationType;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_locationType;
+ (void)__wcdb_column_constraint_9:(void *)a0;

- (void).cxx_destruct;

@end
