@interface IESLiveSlideRoomABManager : NSObject

+ (BOOL)innerFeedRerankEnable;
+ (BOOL)enablePreViewUserFeedbackComboOpt;
+ (BOOL)liveAntiAddictionSwitch;
+ (id)innerFeedRerankConfig;
+ (BOOL)enableUseNewSlideContainer;
+ (id)innerFeedLoadmoreThresholdConfig;
+ (BOOL)liveEnableVideoplayerManager;
+ (BOOL)enableAudienceVCUseFrame;
+ (BOOL)optimizeCurrentIndex;
+ (BOOL)optimizeVisibleCells;
+ (BOOL)needToHiddenFeedbackTopTitle;
+ (BOOL)needToHiddenFeedbackBottomTitle;
+ (BOOL)needToHiddenFeedbackSubmitButton;
+ (id)userFeedbackTextCardLynxUrl;
+ (id)userFeedbackTextCardFallbackUrl;
+ (long long)multiLiveFeedbackLivePlayTime;
+ (BOOL)delayAudienceVCEndAppearanceTransition;
+ (BOOL)hotsoonEnableScrollRoom;

@end
