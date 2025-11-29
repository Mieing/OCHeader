@class NSString;

@interface CloudBackupData_EncryptKeyEntry : WXPBGeneratedMessage

@property (nonatomic) unsigned long long keyId;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

@end
