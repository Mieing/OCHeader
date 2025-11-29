@class NSString;

@interface AWEUserNotificationManager : NSObject <AWEUserNotificationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanPushNotificationsOnLaunchIfNeeded;
+ (void)reportNotificationStatus;
+ (void)reportNotificationStatusInBackground;
+ (void)requestPushAuthorization;
+ (void)openSystemAuthorizationDirectlyIfEnabled:(id /* block */)a0;
+ (void)requestAuthorizationWithShowReason:(id)a0 selectionType:(id)a1;
+ (void)handleConnectionChanged:(id)a0;
+ (void)tabBarDidChangeNotification:(id)a0;
+ (void)handlePushReceivingMessage:(id)a0;
+ (BOOL)isPushForbidden;
+ (BOOL)hasRequestedToShowNotification;
+ (BOOL)isPushForbiddenForURLString:(id)a0;
+ (void)selectivelyCleanPushNotificaionsWithIdentifier:(id)a0 threadIdentifier:(id)a1;
+ (void)reportDeviceInfo;
+ (BOOL)shouldPresentForegroundPush:(id)a0;
+ (void)grantedAction:(BOOL)a0;
+ (void)reportDeviceTokenLegacy:(id)a0;
+ (id)videoCategoryNotificationActions;
+ (id)feedbackCategoryNotificationActions;
+ (id)checkDetailCategoryNotificationActions;
+ (void)registerSpalshDisappearNotification;
+ (void)requestAuthorizationAndUploadTokenWithNewStrategy:(BOOL)a0;
+ (void)isNotificationOffWithCallBack:(id /* block */)a0;
+ (Class)aAWENotificationAuthorizationAdapterClass;
+ (id)getNotificationCategories;
+ (void)registerNetworkingReachabilityChangedNotification;
+ (long long)prePermissionViewShowedTimes;
+ (void)didReceiveSplashDisappearNotification;
+ (BOOL)customPushForbidden;
+ (BOOL)isPushForbiddenForURL:(id)a0;
+ (void)selectivelyCleanPushOnScene:(id)a0;
+ (void)removeDeliveredNotificationsWithThreadIdentifiers:(id)a0;
+ (void)onLaunchCleanNotification:(id)a0;
+ (void)cleanOutdatedNotification:(id)a0;
+ (id)getNotificationCategoriesUpIOS12;
+ (id)getNotificationCategoriesBeyondIOS12;
+ (long long)prePermissionViewLastShowedTimestamp;
+ (void)recordPermissionViewShowStatus;
+ (void)enterCommentDiggVCNotification:(id)a0;
+ (void)enterFansVCNotification:(id)a0;
+ (void)enterIMMessageNotification:(id)a0;
+ (BOOL)isNotificationCategoryOptionDisabled;

- (id)aAWENotificationAuthorizationAdapter;

@end
