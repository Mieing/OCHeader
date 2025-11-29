@interface CSJRewardedVideoAdReporter : NSObject

+ (void)reportStatsEvent:(id)a0 material:(id)a1 eventExtra:(id)a2;
+ (void)reportAppLogEvent:(id)a0 material:(id)a1 adExtraDic:(id)a2;
+ (void)reportRewardArrivedBeginWithSettingModel:(id)a0 material:(id)a1 rewardType:(long long)a2;
+ (void)reportRewardArrivedResult:(BOOL)a0 settingModel:(id)a1 material:(id)a2 rewardType:(long long)a3 verify:(BOOL)a4 error:(id)a5;
+ (void)reportAppLogEvent:(id)a0 material:(id)a1;

@end
