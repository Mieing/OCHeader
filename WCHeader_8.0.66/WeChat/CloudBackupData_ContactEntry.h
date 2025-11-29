@class NSString;

@interface CloudBackupData_ContactEntry : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *contactName;
@property (nonatomic) unsigned long long minVersion;
@property (nonatomic) unsigned long long backupSize;
@property (nonatomic) unsigned long long cloudLastBackupTime;
@property (nonatomic) unsigned long long localLastBackupTime;
@property (nonatomic) BOOL isOn;

+ (void)initialize;

@end
