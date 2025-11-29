@class NSString, CSJMaterialMeta;
@protocol CSJNativeExpressVideoAdDelegate, CSJVideoAdDelegate, CSJInterstitialAdDelegate;

@interface CSJNativeExpressRewardDrawRewardSender : NSObject

@property (weak, nonatomic) id<CSJNativeExpressVideoAdDelegate, CSJVideoAdDelegate, CSJInterstitialAdDelegate> rewardedVideoAd;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (copy, nonatomic) NSString *playStartTS;

- (void)_updateRewardWithType:(long long)a0 propose:(float)a1;
- (void)safe_videoAdServerRewardDidSucceedVerify:(BOOL)a0;
- (void)safe_videoAdServerRewardDidFailWithError:(id)a0;
- (void)verifyRewardWithDurationTime:(double)a0 type:(long long)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)sendVerifiedRewardWithDuration:(double)a0 type:(long long)a1 meta:(id)a2 settingModel:(id)a3 playStartTS:(id)a4 resultBlock:(id /* block */)a5;
- (id)initWithRewardedVideoAd:(id)a0;
- (void).cxx_destruct;

@end
