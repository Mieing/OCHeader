@interface AffRoamAutoBackupEvent : WXPBGeneratedMessage

@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long checkInterval;
@property (nonatomic) unsigned long long checkDelay;
@property (nonatomic) unsigned long long reserveLatest;
@property (nonatomic) unsigned int backupOption;
@property (nonatomic) unsigned long long lastAutoBackupEndTime;

+ (void)initialize;

@end
