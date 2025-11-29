@class NSString, CSJNativeExpressRewardedVideoAd, NSDictionary, CSJRewardedVideoModel, CSJAdSlot;
@protocol CSJRewardedVideoAdDelegate;

@interface CSJRewardedVideoAd : NSObject <CSJNativeExpressRewardedVideoAdDelegate, CSJMopubAdMarkUpDelegate, CSJAdClientBiddingProtocol>

@property (retain, nonatomic) CSJNativeExpressRewardedVideoAd *nativeExpressRewardedVideoAd;
@property (nonatomic) BOOL materialMetaIsFromPreload;
@property (nonatomic) double expireTimestamp;
@property (nonatomic) BOOL didSetADM;
@property (nonatomic) BOOL playFinishDidCallback;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJRewardedVideoModel *rewardedVideoModel;
@property (weak, nonatomic) id<CSJRewardedVideoAdDelegate> delegate;
@property (weak, nonatomic) id<CSJRewardedVideoAdDelegate> rewardPlayAgainInteractionDelegate;
@property (readonly, copy, nonatomic) NSDictionary *mediaExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMopubSuccessLoadVideo:(id)a0 isPre:(BOOL)a1;
- (void)win:(id)a0;
- (void)loss:(id)a0 lossReason:(id)a1 winBidder:(id)a2;
- (void)setAdMarkup:(id)a0;
- (id)biddingToken;
- (void)loadAdData;
- (id)getAdCreativeToken;
- (double)getExpireTimestamp;
- (id)initWithSlot:(id)a0 rewardedVideoModel:(id)a1;
- (BOOL)showAdFromRootViewController:(id)a0 ritScene:(long long)a1 ritSceneDescribe:(id)a2;
- (void)safeDelegate_rewardedVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)safeDelegate_rewardedVideoAdVideoDidLoad:(id)a0;
- (void)safeDelegate_rewardedVideoAdDidLoad:(id)a0;
- (unsigned long long)rewardedVideoAdType;
- (void)safeDelegate_rewardedVideoAdCallback:(id)a0 withType:(unsigned long long)a1;
- (void)safeDelegate_rewardedVideoAdWillVisible:(id)a0;
- (void)safeDelegate_rewardedVideoAdDidVisible:(id)a0;
- (void)safeDelegate_rewardedVideoAdWillClose:(id)a0;
- (void)safeDelegate_rewardedVideoAdDidClose:(id)a0;
- (void)safeDelegate_rewardedVideoAdDidClick:(id)a0;
- (void)safeDelegate_rewardedVideoAdDidClickSkip:(id)a0;
- (void)safeDelegate_rewardedVideoAdDidPlayFinish:(id)a0 didFailWithError:(id)a1;
- (void)safeDelegate_rewardedVideoAdServerRewardDidSucceed:(id)a0 verify:(BOOL)a1;
- (void)safeDelegate_rewardedVideoAdServerRewardDidFail:(id)a0 error:(id)a1;
- (void)nativeExpressRewardedVideoAdDidLoad:(id)a0;
- (void)nativeExpressRewardedVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressRewardedVideoAdCallback:(id)a0 withType:(unsigned long long)a1;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(id)a0;
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(id)a0;
- (void)nativeExpressRewardedVideoAdViewRenderFail:(id)a0 error:(id)a1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)a0;
- (void)nativeExpressRewardedVideoAdDidVisible:(id)a0;
- (void)nativeExpressRewardedVideoAdWillClose:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClose:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClick:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClickSkip:(id)a0;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)a0 verify:(BOOL)a1;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(id)a0 error:(id)a1;
- (void)nativeExpressRewardedVideoAdDidCloseOtherController:(id)a0 interactionType:(long long)a1;
- (void)handleFailLoadMaterial:(id)a0;
- (id)initWithSlotID:(id)a0 rewardedVideoModel:(id)a1;
- (BOOL)showAdFromRootViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)setPrice:(id)a0;

@end
