@class NSString, MMNotificationSetting;

@interface SettingNotificationMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMNotificationSetting *cachedNotificationSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isApnsContentSettingOpen;

- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)refreshSetting;
- (BOOL)checkIsVoipTipsClose;
- (BOOL)checkIsOpenNewVoIPRingToneSound;
- (id)mmkvMapID;
- (long long)notificationContentSetting;
- (void).cxx_destruct;

@end
