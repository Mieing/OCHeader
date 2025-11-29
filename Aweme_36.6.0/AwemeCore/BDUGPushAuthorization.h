@interface BDUGPushAuthorization : NSObject

+ (BOOL)isSilentNotification:(id)a0;
+ (id)convertUNAuthorizationStatus:(long long)a0;
+ (id)convertUNNotificationSetting:(long long)a0;
+ (id)convertUNAlertStyle:(long long)a0;
+ (id)convertUNShowPreviewsSetting:(long long)a0;
+ (id)detailPushStatusBeforeIOS10;
+ (id)systemPushStatus;
+ (id)convertSystemPushSetting:(id)a0;
+ (id)convertiOS12NotifyStatusWithAuthorizationSettings:(id)a0;
+ (id)detailPushStatus:(id)a0;

@end
