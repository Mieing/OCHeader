@class NSDictionary, NSArray;

@interface AWEVideoDescriptionPanelConfigManager : NSObject

@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSArray *blockAwemeTypeList;
@property (nonatomic) BOOL clickTitleExpand;

+ (id)sharedManager;

- (BOOL)needHideRelatedVideoBarInFeed;
- (BOOL)canEnterStablePanelWithModel:(id)a0 referString:(id)a1;
- (id)mainTitleWithReferString:(id)a0;
- (id)titleConfig;
- (long long)videoRelatedEntryInLPP;
- (BOOL)enableSoftAdClick;
- (id)descToggleText;
- (BOOL)videoDescriptionSmartPreload;
- (double)videoDescriptionSmartPreloadDelay;
- (BOOL)videoDescriptionSmartPreloadOnlyIfClickedExpand;
- (BOOL)referStringIsInList:(id)a0;
- (BOOL)canEnterStablePanelWithModel:(id)a0 referString:(id)a1 forFeedPageEntrance:(BOOL)a2;
- (id)stableBottomConfig;
- (id)videoDescriptionSmartPreloadConfig;
- (id)mainTitleConfig;
- (id)tinyTitleConfig;
- (long long)panelCollapseMode;
- (double)panelCollapseHeight;
- (BOOL)needHideRelatedRecommendBarInFeed;
- (BOOL)hitReturnToFeedInFeedBottom;
- (BOOL)stableDetailPageBottomViewIconDarkStyle;
- (id)stableDetailPageBottomViewBackGroundColor;
- (id)stableDetailPageBottomViewLabelColor;
- (id)returnToFeedText;
- (BOOL)enableVideoTranslation;
- (BOOL)irrelaventFeedBack;
- (BOOL)videoDescriptionSmartPreloadDebugToast;
- (BOOL)singleColumnSeekbarAreaEnlarge;
- (BOOL)singleColumnSeekbarUIOptimize;
- (long long)singleColumnCoverBgColorAnimateDuration;
- (BOOL)singleColumnVideoCoverJumpFix;
- (id)tinyTitleWithReferString:(id)a0;
- (BOOL)animationTimeOptEnable;
- (double)animationTimeT;
- (void).cxx_destruct;
- (id)colorWithHexString:(id)a0;

@end
