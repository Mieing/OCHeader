@interface AWEPushApplicationControllerImplRemote : NSObject

+ (id)feedConsumptionPushInfo;
+ (id)referStringFromScheme:(id)a0;
+ (id)consumeLastTimePushUserInfo;
+ (void)handleNotificationPushContent:(id)a0 isColdLaunch:(BOOL)a1;
+ (void)storeAwemePushInfoWithContent:(id)a0;
+ (Class)aAWEPushSchemaDOUYINJXAdapterClass;
+ (void)p_onAppHandleNotificationWithContent:(id)a0 isColdLaunch:(BOOL)a1;
+ (void)markShareTokenAppLaunchForNotification;
+ (void)trackAppLaunchWithPushOpenURL:(id)a0 isInBackground:(BOOL)a1;
+ (void)handleUidTrack:(id)a0 payload:(id)a1;
+ (void)handleAwemePush:(id)a0 session:(id)a1 userInfo:(id)a2 coldLaunch:(BOOL)a3 extraInfo:(id)a4;
+ (void)selectivelyCleanPushNotificationsIdentifier:(id)a0;
+ (BOOL)inBackWhiteListWithId:(id)a0 templateId:(id)a1;
+ (void)customTrackAwemePushWithPushId:(id)a0 extValue:(id)a1 netType:(id)a2;
+ (id)excludeLabelForPushNotifications;
+ (double)customDelayTime;
+ (void)handleOpenSettings;
+ (void)logPushEventWithString:(id)a0;

- (id)aAWEPushSchemaDOUYINJXAdapter;

@end
