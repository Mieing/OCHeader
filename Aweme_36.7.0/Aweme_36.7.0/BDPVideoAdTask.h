@class NSDictionary, BDPUniqueID, NSString;
@protocol BDPAppVideoAdProtocol;

@interface BDPVideoAdTask : NSObject <BDPAppVideoAdDelegate, BDPAppRewardTaskProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *adUnitId;
@property (copy, nonatomic) id /* block */ resultCompletion;
@property (copy, nonatomic) id /* block */ executeCallBack;
@property (retain, nonatomic) id<BDPAppVideoAdProtocol> videoAd;
@property (nonatomic) long long adType;
@property (nonatomic) long long watchCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_loadResultEventWithVideoAD:(id)a0 adUnitId:(id)a1 error:(id)a2;
- (id)initWithUniqueId:(id)a0 params:(id)a1;
- (void)runRewardTaskWithExecuteCallBack:(id /* block */)a0 resultCompletion:(id /* block */)a1;
- (void)bdp_videoAdDidLoadSuccess:(id)a0;
- (void)bdp_videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)bdp_videoAdBecomeEffective:(id)a0;
- (void)bdp_videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)bdp_videoAdRenderFail:(id)a0 error:(id)a1;
- (void)bdp_videoAdStartPlay:(id)a0;
- (void)bdp_videoAd:(id)a0 didClickBannerCardWithInfo:(id)a1;
- (void)bdp_videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void).cxx_destruct;

@end
