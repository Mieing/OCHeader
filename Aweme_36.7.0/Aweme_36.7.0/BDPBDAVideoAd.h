@class UINavigationController, BDARewardedVideoAdBaseController, NSString, BDPUniqueID;
@protocol BDPAppVideoAdDelegate;

@interface BDPBDAVideoAd : NSObject <BDARewardedVideoAdDelegate, UINavigationControllerDelegate, BDPAppVideoAdProtocol>

@property (retain, nonatomic) BDARewardedVideoAdBaseController *videoAdViewController;
@property (retain, nonatomic) UINavigationController *nav;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSString *adUnitId;
@property (weak, nonatomic) id<BDPAppVideoAdDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAdDidLoadSuccess:(id)a0;
- (void)videoAd:(id)a0 didClickBannerCardWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdStartPlay:(id)a0 isResume:(BOOL)a1;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (id)moreRewardInfo;
- (id)appendMoreRewardInfo:(id)a0 originDict:(id)a1;
- (id)initWithDelegate:(id)a0 uniqueId:(id)a1 adUnitId:(id)a2;
- (void)bdp_createVideoAdWithResultCompletion:(id /* block */)a0;
- (void)bdp_loadAd;
- (long long)bdp_rewardIndex;
- (void)bdp_showFromViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;

@end
