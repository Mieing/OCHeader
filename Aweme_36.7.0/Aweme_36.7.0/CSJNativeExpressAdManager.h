@class CSJNativeExpressAdConverter, NSArray, NSDictionary, NSString, CSJNativeAdsManager, NSMutableArray, CSJAdSlot;
@protocol CSJNativeExpressAdViewDelegate;

@interface CSJNativeExpressAdManager : NSObject <CSJNativeAdsManagerDelegate, CSJNativeExpressAdViewDismissDelegate, CSJNativeExpressAdConverterDelegate, CSJMopubAdMarkUpDelegate>

@property (retain, nonatomic) CSJNativeAdsManager *adManager;
@property (retain, nonatomic) NSMutableArray *nativeExpressAdViewArray;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) CSJNativeExpressAdConverter *nativeExpressAdConverter;
@property (nonatomic) BOOL didSetADM;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ videoCachedSuccess;
@property (nonatomic) double tolerateTimeout;
@property (retain, nonatomic) NSArray *nativeAdDataArray;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) CSJAdSlot *adslot;
@property (nonatomic) struct CGSize { double x0; double x1; } adSize;
@property (weak, nonatomic) id<CSJNativeExpressAdViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_initSetup;
- (id)expressAdViewDelegateInNativeExpressAdConverter:(id)a0;
- (id)expressAdViewDismissDelegateInNativeExpressAdConverter:(id)a0;
- (void)nativeExpressAdConverter:(id)a0 nativeExpressAdViewArray:(id)a1;
- (void)setAdMarkup:(id)a0;
- (id)biddingToken;
- (void)loadAdData;
- (void)pbu_loadRewardedFullscreenAd;
- (void)loadAdDataWithCount:(long long)a0;
- (void)handleFailureLoadWithError:(id)a0;
- (void)downLoadPlayableZipWithMaterial:(id)a0;
- (void)handleSuccessLoadForPurePlayable:(id)a0;
- (void)handleSuccessLoadWithNativeAds:(id)a0;
- (void)preLoadMiddlePageWithAd:(id)a0;
- (void)_loadRewardedFullscreenAdEventAction:(id)a0 preloadResultType:(long long)a1;
- (void)safeDelegate_nativeExpressAdSuccessToLoad:(id)a0 views:(id)a1;
- (void)handleHalfCardStyle:(id)a0;
- (void)safeDelegate_nativeExpressAdFailToLoad:(id)a0 error:(id)a1;
- (void)handleGroupAdsFrom:(id)a0 groupAds:(id)a1 normalAds:(id)a2;
- (void)handleCardView:(id)a0 into:(id)a1;
- (void)nativeAdsManagerSuccessToLoad:(id)a0 nativeAds:(id)a1;
- (void)nativeAdsManager:(id)a0 didFailWithError:(id)a1;
- (void)loadAdDataWithCount:(long long)a0 invokeByPublisher:(BOOL)a1;
- (id)initWithSlot:(id)a0 adSize:(struct CGSize { double x0; double x1; })a1;
- (void)setMopubAdMarkUp:(id)a0 successLoadVideo:(id /* block */)a1;
- (void)nativeExpressAdViewDismiss:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
