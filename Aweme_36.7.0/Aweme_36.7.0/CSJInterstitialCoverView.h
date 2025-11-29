@class CSJNativeAdRelatedView, NSString;
@protocol CSJInterstitialCoverViewDelegate;

@interface CSJInterstitialCoverView : CSJCoverView <CSJVideoAdViewDelegate>

@property (nonatomic) BOOL haveVideoView;
@property (weak, nonatomic) id<CSJInterstitialCoverViewDelegate> interstitialDelegate;
@property (retain, nonatomic) CSJNativeAdRelatedView *nativeAdRelatedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerReadyToPlay:(id)a0;
- (void)playerDidPlayFinish:(id)a0;
- (void)videoAdViewDidClick:(id)a0;
- (void)videoAdViewFinishViewDidClick:(id)a0;
- (void)videoAdViewDidCloseOtherController:(id)a0 interactionType:(long long)a1;
- (void)addVideoViewIfNeed;
- (void)interstitialVideoDidClick:(id)a0;
- (void)videoAdView:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAdView:(id)a0 stateDidChanged:(long long)a1;
- (void)pbu_override_buildView;
- (void)pbu_override_buildViewData;
- (double)playerTotalTime;
- (void).cxx_destruct;
- (void)dealloc;
- (double)playerCurrentTime;

@end
