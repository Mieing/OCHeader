@interface ActionCodeNotifyEncryptContext : WXPBGeneratedMessage

@property (nonatomic) unsigned int keyMethod;
@property (nonatomic) unsigned int encryptAlgo;
@property (nonatomic) unsigned int encryptVer;
@property (nonatomic) unsigned int encryptSalt;
@property (nonatomic) unsigned int compressAlgo;
@property (nonatomic) unsigned int compressVer;
@property (nonatomic) unsigned int compressLen;
@property (nonatomic) unsigned int checkSum;

+ (void)initialize;

@end
