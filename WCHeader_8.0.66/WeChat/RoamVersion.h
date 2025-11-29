@interface RoamVersion : WXPBGeneratedMessage

@property (nonatomic) unsigned long long maxRoamSettingVersion;
@property (nonatomic) unsigned long long maxEncryptKeyVersion;
@property (nonatomic) unsigned long long maxDelOpVersion;
@property (nonatomic) unsigned long long maxRoamDataVersion;

+ (void)initialize;

@end
