@class NSDictionary, LynxView, NSString;

@interface IESECMallAdRewardDelegateImp : NSObject <AWERewardVideoProtocol>

@property (weak, nonatomic) LynxView *lynxView;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 loadSuccessWithInfos:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdAfterDismissed;
- (void)videoAd:(id)a0 becomeEffectiveWithInfos:(id)a1 index:(long long)a2;
- (void)videoAd:(id)a0 moreRewardDisplayInfoIndex:(long long)a1 callBack:(id /* block */)a2;
- (id)trackEvent:(int)a0 info:(id)a1 needReport:(BOOL)a2;
- (void).cxx_destruct;

@end
