@interface AWEAdUtil : NSObject <AWEAdUtilProtocol>

+ (long long)getECPRealTimeClickType:(id)a0;
+ (long long)showSecondInQuickSlides:(id)a0;
+ (void)updateAdComponentShowInfo:(id)a0 showSecond:(long long)a1;
+ (id)calculateAdComponentShowInfo:(id)a0;
+ (BOOL)shouldShowNakedEye3DVideoWithModel:(id)a0;
+ (void)updatePlayerControllerForNakedEye3D:(id)a0 isOn:(BOOL)a1 withModel:(id)a2;
+ (id)addClickParamsForOpenUrl:(id)a0 withModel:(id)a1;
+ (BOOL)canUseNewReportUrlWithModel:(id)a0;
+ (id)adNewEvaluateTextWithModel:(id)a0;
+ (BOOL)shouldAllowAdStrategyWithModel:(id)a0 andAB:(id)a1;
+ (id)imageViewBackgroundViewWithModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)canShowBlurredLearnMoreWithModel:(id)a0;
+ (BOOL)shouldUseAuroraPortalWithModel:(id)a0;
+ (BOOL)shouldUseAdLearnMoreElementWithModel:(id)a0;
+ (BOOL)shouldUseModifyAdLearnMoreElementWithModel:(id)a0;
+ (id)registerJumpTokenWithModel:(id)a0 logExtra:(id)a1 isLandingPage:(BOOL)a2 cid:(id)a3 target:(id)a4 referString:(id)a5;
+ (BOOL)shouldAddUGCertIdOpenOtherApp;
+ (void)preloadBoardImageWithModel:(id)a0;
+ (BOOL)isFromAdPlayletWithModel:(id)a0;
+ (id)addAdPlayletParamsToDict:(id)a0 Aweme:(id)a1;
+ (void)trackBrandSafetyWithModel:(id)a0;
+ (BOOL)feedAdComponentDisableWithModel:(id)a0 scene:(unsigned long long)a1;
+ (BOOL)isStarlasLive:(id)a0;
+ (id)enterpriseExtraWithModel:(id)a0;
+ (BOOL)useAdComponentShowPredict;
+ (BOOL)isNewPadStyle:(id)a0;
+ (long long)adNativeButtonStyleWithModel:(id)a0;
+ (id)lynxUrlAddAdInfo:(id)a0 adModel:(id)a1;
+ (BOOL)adNativeButtonStyleABTest;
+ (BOOL)newLandingPgaeStyleWithModel:(id)a0;
+ (id)getNewAppsAdConfig;
+ (BOOL)isThirdSiteAutoFillWithModel:(id)a0;
+ (BOOL)adLongGestureOpWithModel:(id)a0;
+ (BOOL)adOpenPadSplitWithContext:(id)a0 targetVC:(id)a1;
+ (BOOL)isAdLandingPage:(id)a0;
+ (BOOL)openUrlUseAsync;
+ (double)preloadAnchorPageSecondWithModel:(id)a0;
+ (id)getLiveDislikeDictWithAdModel:(id)a0;
+ (void)feedBenefitMeApply:(id)a0;
+ (void)benefitMeApply:(id)a0 requestCompletion:(id /* block */)a1;
+ (BOOL)enableUseBigFontWithModel:(id)a0;
+ (BOOL)enableAdWatchWithDisplayWithModel:(id)a0;
+ (BOOL)canAdjustCardWidth:(id)a0;
+ (long long)getAdLandingPageOptimizeType:(id)a0;
+ (void)insertAdPreloadResourceWithModel:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
