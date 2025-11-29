@interface BDPAdvertismentEventTrack : NSObject

+ (id)commonParamWithEvent:(id)a0;
+ (void)bannerAdCreateEventWithParams:(id)a0;
+ (void)bannerAdCreateResultEventWithParams:(id)a0 success:(BOOL)a1 errCode:(long long)a2 errMsg:(id)a3;
+ (void)bannerAdRequestResultEventWithParams:(id)a0 success:(BOOL)a1 errCode:(long long)a2 errMsg:(id)a3;
+ (void)bannerAdShowEventWithParams:(id)a0;
+ (void)bannerAdShowOverEventWithParams:(id)a0;
+ (void)appBannerAdOperateEventWithParams:(id)a0 operationType:(id)a1;
+ (void)bannderAdClickEventWithParams:(id)a0;
+ (void)videoAdRequestResultEventWithParams:(id)a0 success:(BOOL)a1 errorCode:(long long)a2 errorMessage:(id)a3;
+ (void)videoAdExitEventWithParams:(id)a0 playTime:(long long)a1 effectTime:(long long)a2 duration:(long long)a3;
+ (void)videoAdOperateEventWithParams:(id)a0 operationType:(id)a1 success:(BOOL)a2 errorCode:(long long)a3 errorType:(id)a4 errMsg:(id)a5;
+ (void)videoAdCreateEventWithParams:(id)a0;
+ (void)videoAdCreateResultEventWithParams:(id)a0 success:(BOOL)a1 errCode:(long long)a2 errMsg:(id)a3;
+ (void)videoAdSkipDialogEventWithParams:(id)a0 click:(BOOL)a1 skiped:(BOOL)a2;
+ (void)interstitialAdCreateResultEventWithParams:(id)a0 success:(BOOL)a1 errorCode:(long long)a2 errorMessage:(id)a3;
+ (void)interstitialAdRequestResultEventWithParams:(id)a0 success:(BOOL)a1 errorCode:(long long)a2 errorMessage:(id)a3;
+ (void)interstitialAdShowOverEventWithParams:(id)a0;
+ (void)interstitialAdShowResultEventWithParams:(id)a0 success:(BOOL)a1 erroCode:(long long)a2 errorMessage:(id)a3;
+ (void)interstitialAdOperateEventWithParams:(id)a0 operationType:(id)a1 success:(BOOL)a2 errorCode:(long long)a3 errorType:(id)a4 errMsg:(id)a5;
+ (void)rewardAdRequestEventWithAdUnitId:(id)a0 UniqueId:(id)a1;
+ (void)rewardAdRequestFailEventWithAdUnitId:(id)a0 UniqueId:(id)a1 IsScreenRecord:(id)a2 Error:(id)a3;
+ (void)rewardAdShowToastEventWithAdUnitId:(id)a0 UniqueId:(id)a1 ToastType:(id)a2;
+ (void)rewardAdShowDialogEventWithAdUnitId:(id)a0 UniqueId:(id)a1;
+ (void)rewardAdDialogClickEventWithAdUnitId:(id)a0 UniqueId:(id)a1 ClickResult:(id)a2;
+ (void)videoAdOperateEventWithParams:(id)a0 operationType:(id)a1 errorCode:(long long)a2 errMsg:(id)a3 errorType:(id)a4;
+ (void)videoAdRequestResultEventWithParams:(id)a0 errorCode:(long long)a1 errorMessage:(id)a2;
+ (void)videoAdCloseEventWithParams:(id)a0 hasReward:(BOOL)a1;
+ (void)videoAdBackupTaskFinish:(id)a0 params:(id)a1;

@end
