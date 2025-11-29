@class NSString, NSDictionary, CSJNativeExpressFullscreenVideoAd, CSJAdSlot;
@protocol CSJFullscreenVideoAdDelegate;

@interface CSJFullscreenVideoAd : NSObject <CSJNativeExpressFullscreenVideoAdDelegate, CSJMopubAdMarkUpDelegate, CSJAdClientBiddingProtocol>

@property (retain, nonatomic) CSJNativeExpressFullscreenVideoAd *nativeExpressFullscreenVideoAd;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (nonatomic) BOOL materialMetaIsFromPreload;
@property (nonatomic) double expireTimestamp;
@property (nonatomic) BOOL didSetADM;
@property (weak, nonatomic) id<CSJFullscreenVideoAdDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *mediaExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMopubSuccessLoadVideo:(id)a0 isPre:(BOOL)a1;
- (void)safeDelegate_fullscreenVideoAdVideoDataDidLoad:(id)a0;
- (void)safeDelegate_fullscreenVideoMaterialMetaAdDidLoad:(id)a0;
- (void)safeDelegate_fullscreenVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)safeDelegate_fullscreenVideoAdWillVisible:(id)a0;
- (void)safeDelegate_fullscreenVideoAdDidVisible:(id)a0;
- (void)safeDelegate_fullscreenVideoAdDidClick:(id)a0;
- (void)safeDelegate_fullscreenVideoAdDidClickSkip:(id)a0;
- (void)safeDelegate_fullscreenVideoAdWillClose:(id)a0;
- (void)safeDelegate_fullscreenVideoAdDidClose:(id)a0;
- (void)safeDelegate_fullscreenVideoAdDidPlayFinish:(id)a0 didFailWithError:(id)a1;
- (unsigned long long)fullscreenVideoAdType;
- (void)safeDelegate_fullscreenVideoAdCallback:(id)a0 withType:(unsigned long long)a1;
- (void)win:(id)a0;
- (void)loss:(id)a0 lossReason:(id)a1 winBidder:(id)a2;
- (void)setAdMarkup:(id)a0;
- (id)biddingToken;
- (void)loadAdData;
- (id)getAdCreativeToken;
- (BOOL)showAdFromRootViewController:(id)a0 ritSceneDescribe:(id)a1;
- (void)nativeExpressFullscreenVideoAdDidLoad:(id)a0;
- (void)nativeExpressFullscreenVideoAdCallback:(id)a0 withType:(unsigned long long)a1;
- (void)nativeExpressFullscreenVideoAdDidDownLoadVideo:(id)a0;
- (void)nativeExpressFullscreenVideoAdViewRenderSuccess:(id)a0;
- (void)nativeExpressFullscreenVideoAdDidClickSkip:(id)a0;
- (void)nativeExpressFullscreenVideoAdDidPlayFinish:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressFullscreenVideoAdWillClose:(id)a0;
- (void)nativeExpressFullscreenVideoAdDidClose:(id)a0;
- (void)nativeExpressFullscreenVideoAdDidClick:(id)a0;
- (void)nativeExpressFullscreenVideoAdDidVisible:(id)a0;
- (void)nativeExpressFullscreenVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressFullscreenVideoAdViewRenderFail:(id)a0 error:(id)a1;
- (void)nativeExpressFullscreenVideoAdDidCloseOtherController:(id)a0 interactionType:(long long)a1;
- (void)nativeExpressFullscreenVideoAdWillVisible:(id)a0;
- (double)getExpireTimestamp;
- (BOOL)showAdFromRootViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithSlot:(id)a0;
- (id)initWithSlotID:(id)a0;
- (void)setPrice:(id)a0;

@end
