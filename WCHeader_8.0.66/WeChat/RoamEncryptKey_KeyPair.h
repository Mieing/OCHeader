@class NSData;

@interface RoamEncryptKey_KeyPair : WXPBGeneratedMessage

@property (nonatomic) unsigned long long encryptKeyId;
@property (retain, nonatomic) NSData *encryptKey;
@property (nonatomic) unsigned int encryptType;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

@end
