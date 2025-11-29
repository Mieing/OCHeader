@interface VQMProfileInfoNotification : WXPBGeneratedMessage

@property (nonatomic) int systemSettingAuthorizationStatusIos;
@property (nonatomic) int systemSettingIosNotificationCenter;
@property (nonatomic) int systemSettingIosLockScreen;
@property (nonatomic) int systemSettingIosCarplay;
@property (nonatomic) int systemSettingIosAlert;
@property (nonatomic) int systemSettingIosSound;
@property (nonatomic) int systemAlertStyleIos;
@property (nonatomic) int appRingtoneEnable;
@property (nonatomic) int appNewTipsEnable;
@property (nonatomic) int iosPushType;

+ (id)instanceFromUNNotificationSettings:(id)a0;
+ (void)initialize;

@end
