@class NSArray, NSMutableDictionary, NSString, AWEPayXBridgeTtcjpayCreateRewardedVideoMethodParamModel;

@interface AWEPayRewardVideoDelegateImp : NSObject <AWERewardVideoProtocol>

@property (retain, nonatomic) NSMutableDictionary *rewardCacheDic;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *moreRewardInfos;
@property (nonatomic) long long currentCount;
@property (retain, nonatomic) AWEPayXBridgeTtcjpayCreateRewardedVideoMethodParamModel *paramModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 loadSuccessWithInfos:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdAfterDismissed;
- (void)broadcastWithEvent:(id)a0 params:(id)a1;
- (void)videoAd:(id)a0 becomeEffectiveWithInfos:(id)a1 index:(long long)a2;
- (void)videoAd:(id)a0 moreRewardDisplayInfoIndex:(long long)a1 callBack:(id /* block */)a2;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (void)resetRewardCacheInfo;
- (void).cxx_destruct;

@end
