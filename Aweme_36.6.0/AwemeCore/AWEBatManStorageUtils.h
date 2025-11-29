@interface AWEBatManStorageUtils : NSObject

+ (void)setCommonLocalUserNoticeWithType:(unsigned long long)a0;
+ (id)getTempUserNameWithDeviceId:(id)a0;
+ (void)setTempUserNameWithName:(id)a0 deviceId:(id)a1;
+ (id)getDefaultUserNameWithUserId:(id)a0;
+ (void)setDefaultUserNameWithName:(id)a0 userId:(id)a1;
+ (BOOL)getCommonLocalUserNoticeWithType:(unsigned long long)a0;
+ (BOOL)canPlayAdToIncreaseTrialTimeWithUserId:(id)a0 timesLimit:(int)a1;
+ (BOOL)isCanShowNetworkQualityPushWithUserId:(id)a0;
+ (void)saveNetworkQualityPushDateWithuserId:(id)a0 date:(id)a1;
+ (long long)yesterdayStartTime;
+ (long long)todayStartTime;
+ (void)modifyPlayAdTimesWithUserId:(id)a0 timesLimit:(int)a1;

@end
