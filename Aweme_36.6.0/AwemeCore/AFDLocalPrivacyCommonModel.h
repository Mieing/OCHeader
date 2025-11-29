@class NSString;

@interface AFDLocalPrivacyCommonModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)syncTime;
+ (const void *)userID;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithUserID:(id)a0;
- (id)bdswordDecryptAndAesEncrypt;
- (id)aesDecryptAndBDSwordEncryptForReport:(BOOL)a0;
- (void)aesEncrypt;
- (void)aesDecrypt;
- (id)aesEncryptModel;
- (id)aesDecryptModel;
- (id)bdswordDecrypt;
- (id)bdswordEncrypt;
- (void).cxx_destruct;

@end
