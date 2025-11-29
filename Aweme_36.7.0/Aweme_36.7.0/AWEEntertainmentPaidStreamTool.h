@class NSString;

@interface AWEEntertainmentPaidStreamTool : NSObject <AWEEntertainmentPaidStreamToolProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveIAAPaidStreamControllerWithModel:(id)a0;
+ (double)startTimeForPreviewVideo:(id)a0;
+ (double)endTimeForPreviewVideo:(id)a0;
+ (BOOL)disableListenPlayNextWithModel:(id)a0;
+ (BOOL)isPreviewVideoInPreviewTime:(id)a0;
+ (BOOL)disablePinchZoomWithModel:(id)a0;
+ (BOOL)disableMultiMixVideoWithModel:(id)a0;
+ (BOOL)disableShowPrivacySettingWithModel:(id)a0;
+ (BOOL)disableShowTogetherWithModel:(id)a0;
+ (BOOL)disableShowForwardAsStoryChannelWithModel:(id)a0;
+ (BOOL)disableEnterMusicDetailWithModel:(id)a0;
+ (id)getPlayletVIPPaidPanelParamsWithModel:(id)a0 extraParams:(id)a1 object:(id)a2;
+ (BOOL)dataOptControlLandscapeBlockCardControllerActiveWithModel:(id)a0;
+ (BOOL)shouldShowCountDownViewInLandscape:(id)a0;
+ (BOOL)dataOptControlLandscapeTryWatchControllerActiveWithModel:(id)a0;
+ (BOOL)disableAutoPlayNextWithModel:(id)a0;
+ (BOOL)shouldShowPreviewEndDot:(id)a0;
+ (double)progressForPreviewStartDot:(id)a0;
+ (double)progressForPreviewEndDot:(id)a0;
+ (BOOL)hasPlayletCoverTagWithModel:(id)a0 type:(long long)a1;
+ (BOOL)disableShowDuetWithModel:(id)a0;
+ (BOOL)disableShowSaveWithModel:(id)a0;
+ (void)checkEntRightInfoErrorWithModel:(id)a0;
+ (void)checkEntRightInfoErrorWithItemJson:(id)a0 logPb:(id)a1 indexDictionary:(id)a2;
+ (BOOL)isErrorAccessKeyWithModel:(id)a0;
+ (id)getPlayletVIPConfigWithPlayletModel:(id)a0;
+ (void)openPlayletVIPPaidPanelWithModel:(id)a0 schema:(id)a1 extraParams:(id)a2 object:(id)a3 completion:(id /* block */)a4;
+ (id)paidModelTraceParamsWithModel:(id)a0;
+ (BOOL)shouldShowPreviewStartDot:(id)a0;
+ (BOOL)shouldHideProgressSliderWithModel:(id)a0;
+ (BOOL)shouldShowPreviewDots:(id)a0;
+ (id)getPreviewDotColor:(id)a0;
+ (BOOL)shouldActiveNewMaskControllerWithReferString:(id)a0;
+ (BOOL)shouldActiveNewAutoOpenOrderPageWithReferString:(id)a0;
+ (BOOL)enablePlayletIAAADPreload;
+ (BOOL)disableSpeedWithModel:(id)a0;
+ (BOOL)disableRecommendToFriendWithModel:(id)a0;
+ (BOOL)shouldActiveNewMaskControllerWithModel:(id)a0 referString:(id)a1;
+ (BOOL)isPersonalizedFreeWithModel:(id)a0;
+ (id)getPlayletVIPChargeInfoConfigWithModel:(id)a0;
+ (BOOL)shouldActiveMultipleButtonElementWithModel:(id)a0 context:(id)a1;
+ (BOOL)shouldActiveVideoTrialElementWithModel:(id)a0;
+ (id)getPlayletVIPPaidPanelContainerIDWithModel:(id)a0;
+ (id)getButtonUIInfosWithModel:(id)a0 buttonPosition:(unsigned long long)a1;
+ (BOOL)shouldPreventSingleClickPauseWithModel:(id)a0 currPlayTime:(double)a1;
+ (long long)getRewardWatchStatusWithModel:(id)a0 currentPlayTime:(double)a1;
+ (BOOL)enableLoadMultipleButtonElementWithReferString:(id)a0 model:(id)a1;
+ (BOOL)shouldActiveIAPPaidStreamControllerWithModel:(id)a0;
+ (BOOL)shouldActiveVideoHavePermissionElementWithModel:(id)a0;
+ (BOOL)shouldActiveMaskPresenterWithModel:(id)a0;
+ (void)setPlayletVIPPaidPanelContainerIDWithModel:(id)a0 identifier:(id)a1;
+ (BOOL)shouldResetEncryptedDecryptionKeyWithModel:(id)a0;
+ (BOOL)hasADChargeButtonWithModel:(id)a0 buttonPosition:(unsigned long long)a1;
+ (BOOL)hasVipButtonWithModel:(id)a0 buttonPosition:(unsigned long long)a1;
+ (BOOL)hasFreeWatchButtonWithModel:(id)a0 buttonPosition:(unsigned long long)a1;
+ (BOOL)hasButtonInModel:(id)a0 buttonType:(long long)a1 buttonPosition:(unsigned long long)a2;
+ (BOOL)dataOptControlTrialElementActiveWithModel:(id)a0;
+ (BOOL)dataOptControlProductDetailControllerActiveWithModel:(id)a0;
+ (BOOL)disableShowShowFamiliarRecommendWithModel:(id)a0;
+ (BOOL)disableShowListenFeedWithModel:(id)a0;
+ (BOOL)disableInteractionPreloadWithModel:(id)a0;
+ (BOOL)disableChangeXiguaPrivacyWithModel:(id)a0;
+ (id)getRewardWatchStatusStringWithModel:(id)a0 currentPlayTime:(double)a1;
+ (BOOL)hasPlayletVideoTagWithModel:(id)a0 type:(long long)a1;


@end
