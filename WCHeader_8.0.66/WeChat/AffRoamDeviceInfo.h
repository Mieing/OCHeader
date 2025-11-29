@interface AffRoamDeviceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long usedSize;
@property (nonatomic) unsigned long long backupUsedSize;
@property (nonatomic) unsigned long long lastBackupTime;
@property (nonatomic) BOOL cached;

+ (void)initialize;

@end
