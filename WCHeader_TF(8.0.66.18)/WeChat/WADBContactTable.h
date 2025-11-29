@class NSString, WADBContactPack;

@interface WADBContactTable : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *brandIconURL;
@property (retain, nonatomic) NSString *externalInfo;
@property (retain, nonatomic) WADBContactPack *contactPack;
@property (nonatomic) unsigned int wxAppOpt;
@property (retain, nonatomic) NSString *headImageStatus;
@property (retain, nonatomic) NSString *appId;
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
+ (const void *)type;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_type;
+ (const void *)brandIconURL;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_brandIconURL;
+ (const void *)externalInfo;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_externalInfo;
+ (const void *)contactPack;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_contactPack;
+ (const void *)wxAppOpt;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_wxAppOpt;
+ (const void *)headImageStatus;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_headImageStatus;
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_appId;
+ (void)__wcdb_column_constraint_8:(void *)a0;

- (void).cxx_destruct;

@end
