@class NSString;

@interface CSJFullScreenInterstitialCoverView : CSJFullScreenInterstitialAdView <CSJCoverViewDelegate, CSJInterstitialCoverViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerReadyToPlay:(id)a0;
- (id)initWithMaterial:(id)a0 adSlot:(id)a1 imageStyle:(unsigned long long)a2;
- (void)logoImageViewAction;
- (void)coverViewClick:(id)a0 areaCategory:(long long)a1 clickExtraInfo:(id)a2;
- (void)coverViewClickVideo:(id)a0;
- (void)coverViewClickClose:(id)a0;
- (void)coverViewClickAdLogo:(id)a0;
- (void)coverViewClickDownload:(id)a0 clickExtraInfo:(id)a1;
- (void)interstitialCoverView:(id)a0 videoDidLoadFailWithError:(id)a1;
- (void)interstitialCoverView:(id)a0 videoStateDidChanged:(long long)a1;
- (void)playerDidPlayFinish:(id)a0;
- (void)videoAdViewDidClick:(id)a0;
- (void)videoAdViewFinishViewDidClick:(id)a0;
- (void)videoAdViewDidCloseOtherController:(id)a0 interactionType:(long long)a1;
- (void)layoutSubviews;
- (void)setup;

@end
