@interface MMNotificationSetting : NSObject

@property (readonly, nonatomic) BOOL canShowAlert;
@property (nonatomic) BOOL isAlertSettingOn;
@property (nonatomic) BOOL isNotificationCenterSettingOn;
@property (nonatomic) BOOL isLockScreenSettingOn;
@property (nonatomic) BOOL isSoundSettingOn;
@property (nonatomic) BOOL isBadgeSettingOn;
@property (readonly, nonatomic) BOOL isAllSettingOff;
@property (nonatomic) BOOL isNeverShowPushDetail;
@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long alertStyle;
@property (nonatomic) long long authorizationStatus;

- (BOOL)isEqual:(id)a0;
- (id)description;

@end
