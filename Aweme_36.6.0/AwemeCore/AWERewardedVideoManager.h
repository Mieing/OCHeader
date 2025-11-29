@class NSString, BDARewardedVideoAdBaseController;
@protocol AWERewardVideoProtocol;

@interface AWERewardedVideoManager : NSObject <BDARewardedVideoAdDelegate>

@property (copy, nonatomic) id /* block */ rewardVideoBlock;
@property (copy, nonatomic) id /* block */ loadBlock;
@property (copy, nonatomic) id /* block */ openBlock;
@property (weak, nonatomic) id<AWERewardVideoProtocol> delegate;
@property (nonatomic) long long closeType;
@property (retain, nonatomic) BDARewardedVideoAdBaseController *rewardVideoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)cleanRewardVideoData;
- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 playFailWithError:(id)a1;
- (void)videoAd:(id)a0 loadSuccessWithInfos:(id)a1;
- (void)videoAd:(id)a0 didClickBannerCardWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdAfterDismissed;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (void)lynxViewDidFirstScreen:(id)a0;
- (void)broadcastWithEvent:(id)a0 params:(id)a1;
- (void)createRewardedVideoWithSourceModel:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (void)loadRewardVideoWithSourceModel:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (void)openRewardVideoWithInfo:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
