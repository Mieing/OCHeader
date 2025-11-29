@interface CSJEndcardWebVM : CSJRewardedVideoWebViewControllerVM

@property (nonatomic) BOOL isRenderSucc;

- (void)handleViewDidAppear:(BOOL)a0;
- (void)addReopenSKOverlayObserver;
- (void)checkSKOverlay:(BOOL)a0;
- (void)showDefaultView:(BOOL)a0;
- (void)reopenSKoverlay;
- (id)initViewControllerWithAd:(id)a0 isNativeExpress:(BOOL)a1 pageType:(unsigned long long)a2;
- (BOOL)useLandingPageNewStyle;
- (void)handleViewWillLayoutSubviews;
- (void)webCloseAction;
- (double)getCloseDelayTime;
- (id)closeDictWithDuration:(double)a0;
- (id)getPageUrlString;
- (void)setPageUrlString:(id)a0;
- (void)logoImageViewTapped:(id)a0;
- (BOOL)shouldTrack;
- (void)handleViewDidLoad;

@end
