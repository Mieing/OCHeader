@class NSDictionary;

@interface BDUGPushSwitchStatusManager : NSObject

@property (retain, nonatomic) NSDictionary *systemPushStatus;
@property long long currentAuthStatus;
@property long long currentScheduledDeliverySetting;
@property long long currentTimeSensitiveSetting;
@property (nonatomic) BOOL authStatusChange;

+ (id)sharedInstance;

- (void)getAuthorizationStatusWithCompletionHandler:(id /* block */)a0;
- (id)getOutAppSwitchChangeWithCurrentStatus:(id)a0;
- (void)syncEvent:(id)a0 completion:(id /* block */)a1;
- (void)updatePushSwitchStatus;
- (void)resetStatusFlag;
- (void)uploadOutSwitchNotificationStatusWithSettingsDictionary:(id)a0 notificationTypes:(unsigned long long)a1;
- (BOOL)isUploadNotificationOutSwitchStatusWithSettingsDictionary:(id)a0 notificationTypes:(unsigned long long)a1;
- (void)uploadOutSwitchRequestWithSettingsDictionary:(id)a0 notificationTypes:(unsigned long long)a1;
- (BOOL)isUploadNotificationOutSwitchStatus;
- (id)_getOutAppSwitchChangeWithSettingsDictionary:(id)a0;
- (void)uploadOutSwitchDelegateCompletionWithResponse:(id)a0 SettingsDictionary:(id)a1 notificationTypes:(unsigned long long)a2;
- (id)_getJsonStrFromDictionary:(id)a0;
- (void)uploadNotificationOutSwitchStatusDoneWithSettingsDictionary:(id)a0 notificationTypes:(unsigned long long)a1;
- (void)uploadSwitchNotificationStatusWithNotice:(id)a0 subdividedNotice:(id)a1 switchType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)uploadOutSwitchNotificationStatus;
- (id)_getInAppSwitchChangeWithNotice:(id)a0 subdividedNotice:(id)a1;
- (void)uploadSwitchNotificationStatusDoneWithNotice:(id)a0 subdividedNotice:(id)a1;
- (void)setUpdateNotificationOutSwitchStatusLimitTimes:(double)a0;
- (void)uploadOutSwitchNotificationStatusInBackground;
- (void)uploadInSwitchNotificationStatusWithNotice:(id)a0 subdividedNotice:(id)a1 completionHandler:(id /* block */)a2;
- (void)uploadAllSwitchNotificationStatusWithNotice:(id)a0 subdividedNotice:(id)a1 completionHandler:(id /* block */)a2;
- (void)uploadNotificationStatus:(id)a0;
- (void)uploadSubdividedNotificationStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPushNoticeWithCompletionHandler:(id /* block */)a0;
- (void)getScheduledDeliverySettingWithCompletionHandler:(id /* block */)a0;
- (void)getTimeSensitiveSettingWithCompletionHandler:(id /* block */)a0;
- (void)updatePushSwitchStatusWhenRegisterRemoteNotificationsBefore;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
