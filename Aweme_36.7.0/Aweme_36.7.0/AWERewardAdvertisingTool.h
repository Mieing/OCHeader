@class NSString;

@interface AWERewardAdvertisingTool : NSObject <AWERewardedAdvertisingToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isWatchForAdFreeUserInLocalStorage;
+ (BOOL)enableAutoUnlockWithReferString:(id)a0;
+ (BOOL)enableSlideAutoOpenWithReferString:(id)a0;
+ (double)startTimeForPreviewVideo:(id)a0;
+ (double)endTimeForPreviewVideo:(id)a0;
+ (BOOL)hasShowOnceVmemberContentButton:(id)a0;
+ (void)setShowOnceVmemberContentButton:(id)a0 show:(BOOL)a1;
+ (BOOL)shouldShowUnlockButtonInLandscape:(id)a0;
+ (double)timeIntervalForMultipleClick;
+ (BOOL)hasShowOnceIAAContentButton:(id)a0;
+ (void)setShowOnceIAAContentButton:(id)a0 show:(BOOL)a1;
+ (BOOL)shouldShowCountDownViewInLandscape:(id)a0;
+ (BOOL)shouldShowPreviewEndDot:(id)a0;
+ (double)progressForPreviewStartDot:(id)a0;
+ (double)progressForPreviewEndDot:(id)a0;
+ (void)setShowMaskWithoutPreview:(id)a0 show:(BOOL)a1;
+ (BOOL)hasShowMaskWithoutPreview:(id)a0;
+ (BOOL)shouldShowMaskViewInLandscape:(id)a0;
+ (BOOL)hasWatchForAdFreeRight:(id)a0;
+ (BOOL)shouldShowPreviewStartDot:(id)a0;
+ (id)getRewardedAdvertisingPreviewDotColor;
+ (BOOL)shouldShowPreviewDots:(id)a0;
+ (BOOL)shouldHideProgressSlider:(id)a0;
+ (BOOL)shouldPreventSingleClickPauseWithModel:(id)a0 currPlayTime:(double)a1;
+ (long long)getRewardWatchStatusWithModel:(id)a0 currentPlayTime:(double)a1;
+ (BOOL)shouldRefreshItemWithModel:(id)a0;
+ (BOOL)hasUnlockWithMixID:(id)a0 currentEpisode:(id)a1;
+ (void)setShowOnceFreeWatchContentButton:(id)a0 show:(BOOL)a1;
+ (BOOL)hasShowOnceFreeWatchContentButton:(id)a0;
+ (BOOL)enableAutoUnlockInFeedWithReferString:(id)a0 model:(id)a1;
+ (BOOL)shouldABTestNoPreviewShowProductDetailTimeWithModel:(id)a0 refer:(id)a1;
+ (BOOL)enableAutoUnlockAllSceneWithReferString:(id)a0 model:(id)a1;
+ (BOOL)enableAutoUnlockInFeedWithReferString:(id)a0;
+ (BOOL)shouldAutoUnlockWhenPlay:(id)a0;
+ (BOOL)shouldShowCountDownView:(id)a0;
+ (BOOL)shouldShowVideoHasUnlockedElement:(id)a0;
+ (BOOL)shouldShowUnlockButtonElement:(id)a0 context:(id)a1;
+ (BOOL)shouldShowUnlockButtonMultipleButtonElement:(id)a0 nextModel:(id)a1 referString:(id)a2;
+ (BOOL)enableAutoUnlockWithReferString:(id)a0 model:(id)a1;
+ (void)setShouldAutoUnlockWhenPlay:(id)a0 autoUnlock:(BOOL)a1;


@end
