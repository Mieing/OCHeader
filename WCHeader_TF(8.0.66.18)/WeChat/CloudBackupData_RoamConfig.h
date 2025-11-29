@class NSString;

@interface CloudBackupData_RoamConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned long long maxRoamDataVersion;
@property (nonatomic) unsigned long long maxDelOpVersion;
@property (nonatomic) unsigned long long maxRoamSettingVersion;
@property (nonatomic) unsigned long long maxEncryptKeyVersion;
@property (retain, nonatomic) NSString *hashPassword;
@property (retain, nonatomic) NSString *encryptPassword;

+ (void)initialize;

@end
