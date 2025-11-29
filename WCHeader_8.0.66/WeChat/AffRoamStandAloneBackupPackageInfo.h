@interface AffRoamStandAloneBackupPackageInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long packageId;
@property (nonatomic) unsigned long long lastBackupStopOrErrorTime;
@property (nonatomic) unsigned long long firstBackupStartTime;
@property (nonatomic) unsigned long long lastBackupUpdateTime;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) unsigned long long pauseAutobackupRestartTime;
@property (nonatomic) unsigned long long lastAutobackupSuccessTime;
@property (nonatomic) unsigned long long latestRunningTime;

+ (void)initialize;

@end
