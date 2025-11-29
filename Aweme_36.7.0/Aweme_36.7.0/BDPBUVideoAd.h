@class CSJNativeExpressRewardedVideoAd, BDPUniqueID, NSString;
@protocol BDPAppVideoAdDelegate;

@interface BDPBUVideoAd : NSObject <CSJNativeExpressRewardedVideoAdDelegate, BDPAppVideoAdProtocol>

@property (retain, nonatomic) CSJNativeExpressRewardedVideoAd *videoAd;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSString *adUnitId;
@property (weak, nonatomic) id<BDPAppVideoAdDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)nativeExpressRewardedVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(id)a0;
- (void)nativeExpressRewardedVideoAdViewRenderFail:(id)a0 error:(id)a1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClose:(id)a0;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)a0 verify:(BOOL)a1;
- (id)initWithDelegate:(id)a0 uniqueId:(id)a1 adUnitId:(id)a2;
- (void)bdp_createVideoAdWithResultCompletion:(id /* block */)a0;
- (void)bdp_loadAd;
- (long long)bdp_rewardIndex;
- (void)bdp_showFromViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
