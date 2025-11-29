@class UIViewController, NSString, CSJNativeExpressRewardedVideoAd, CSJRewardedVideoAd;

@interface CSJRewardedVideoAgianAd : NSObject <CSJRewardedVideoAdDelegate, CSJRewardedVideoAgianDelegate>

@property (weak, nonatomic) CSJNativeExpressRewardedVideoAd *originRewardAd;
@property (retain, nonatomic) CSJRewardedVideoAd *rewardVideoAd;
@property (weak, nonatomic) UIViewController *originRewardRootVC;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ fail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *originRootVC;

- (void)rewardedVideoAdWillVisible:(id)a0;
- (void)rewardedVideoAdDidVisible:(id)a0;
- (void)rewardedVideoAdDidClick:(id)a0;
- (void)rewardedVideoAdDidPlayFinish:(id)a0 didFailWithError:(id)a1;
- (void)rewardedVideoAdServerRewardDidSucceed:(id)a0 verify:(BOOL)a1;
- (void)rewardedVideoAdServerRewardDidFail:(id)a0 error:(id)a1;
- (void)rewardedVideoAdDidClickSkip:(id)a0;
- (void)rewardedVideoAdCallback:(id)a0 withType:(unsigned long long)a1;
- (void)rewardedVideoAdDidLoad:(id)a0;
- (void)rewardedVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)rewardedVideoAdVideoDidLoad:(id)a0;
- (void)rewardedVideoAdWillClose:(id)a0;
- (void)rewardedVideoAdDidClose:(id)a0;
- (id)initWithRewardedVideoAd:(id)a0;
- (BOOL)showAdFromRootViewController:(id)a0;
- (void)loadRewardAgianWithSuccess:(id /* block */)a0 fail:(id /* block */)a1;
- (void).cxx_destruct;

@end
