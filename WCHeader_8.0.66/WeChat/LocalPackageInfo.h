@interface LocalPackageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int encryptVersion;

+ (void)initialize;

- (void)setEncryptVersion:(unsigned int)a0;
- (unsigned int)encryptVersion;
- (void)setAppVersion:(unsigned int)a0;
- (unsigned int)appVersion;

@end
