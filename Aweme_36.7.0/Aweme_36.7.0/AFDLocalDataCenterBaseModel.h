@class NSString;

@interface AFDLocalDataCenterBaseModel : MTLModel <NSCopying, WCTTableCoding, MTLJSONSerializing>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *primaryID;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) long long modifyTime;
@property (nonatomic) long long syncTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)modifyTime;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)syncTime;
+ (id)aesEncryptKey;
+ (id)aesEncryptString:(id)a0;
+ (id)aesDecryptString:(id)a0;
+ (id)modelFromDictionary:(id)a0;
+ (const void *)isDeleted;
+ (const void *)primaryID;

- (id)bdswordDecryptAndAesEncrypt;
- (id)aesDecryptAndBDSwordEncryptForReport:(BOOL)a0;
- (void)aesEncrypt;
- (void)aesDecrypt;
- (id)aesEncryptModel;
- (id)aesDecryptModel;
- (id)bdswordDecrypt;
- (id)bdswordEncrypt;
- (id)differentPropertiesWithModel:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (long long)lastUpdateTime;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
