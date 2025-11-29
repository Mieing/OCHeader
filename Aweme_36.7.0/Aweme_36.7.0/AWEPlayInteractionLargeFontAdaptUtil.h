@class NSString;

@interface AWEPlayInteractionLargeFontAdaptUtil : NSObject <AWEPlayInteractionLargeFontAdaptUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFeedLargeFontOptLandscapeEntrance;
+ (BOOL)enableFeedLargeFontAdaptationV2;
+ (BOOL)enableFeedLargeFontOptTag;
+ (BOOL)enableEcommerceLargeFontAdaptation;
+ (id)feedAdaptiveFontWithFont:(id)a0;
+ (struct CGSize { double x0; double x1; })feedAdaptiveSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (double)feedAdaptiveFontSize:(double)a0;
+ (struct CGSize { double x0; double x1; })feedAdaptiveSizeWithSize:(struct CGSize { double x0; double x1; })a0 shouldExemptDowngradeScale:(BOOL)a1;
+ (BOOL)enableFeedLargeFontAdaptation;
+ (double)feedAdaptiveSizeWHWithValue:(double)a0;
+ (id)feedAdaptiveFontWithFont:(id)a0 shouldExemptDowngradeScale:(BOOL)a1;
+ (id)feedAdaptiveFontWithFontSize:(double)a0 weight:(long long)a1;
+ (BOOL)enableFeedLLMLargeFontAdaptation;
+ (double)feedAdaptiveSizeWHWithValue:(double)a0 shouldExemptDowngradeScale:(BOOL)a1;
+ (double)feedAdaptiveFontSize:(double)a0 shouldExemptDowngradeScale:(BOOL)a1;
+ (BOOL)enableFeedMainModuleLargeFontAdaptation;
+ (BOOL)enableFeedLargeFontOptAwemeTypeTag;
+ (double)feedAdaptiveLineHeightWithHeight:(double)a0;
+ (BOOL)enableFeedEntertainmentLargeFontAdaptation;
+ (id)feedAdaptiveFontWithFontSize:(double)a0 weight:(long long)a1 shouldExemptDowngradeScale:(BOOL)a2;
+ (BOOL)enableFeedComponentPaddingAdjust;
+ (BOOL)enableFeedLargeFontOptInteraction;
+ (BOOL)enableFeedTitleLargeFontAdaptation;
+ (BOOL)enableFeedLargeFontOptMusic;
+ (BOOL)enableFeedLargeFontOptTitle;
+ (BOOL)enableFeedAnchorGameCPLargeFontAdaptation;
+ (BOOL)enableFeedAnchorMediumLargeFontAdaptation;
+ (BOOL)enableFeedSoloKtvLargeFontAdaptation;
+ (BOOL)enableFeedRelatedLiveBarLargeFontAdaptation;
+ (BOOL)enableFeedLargeFontOptBar;
+ (BOOL)enableFeedLargeFontOptVerifiedIcon;
+ (BOOL)enableFeedLargeFontOptAuthor;
+ (BOOL)enableFeedLargeFontOptOuterTimeStamp;
+ (BOOL)enableFeedLargeFontOptCocreate;
+ (BOOL)enableFeedLargeFontOptDanmaku;
+ (BOOL)enableFeedLargeFontOptTitleAdTag;
+ (BOOL)currentFontModeEnable;
+ (BOOL)enableFeedLargeFontAdaptationV3;
+ (double)scaleForBigFontAdaptationWithExemption:(BOOL)a0;
+ (id)feedAdaptiveFontWithFontSize:(double)a0 weight:(long long)a1 isFixed:(BOOL)a2 shouldExemptDowngradeScale:(BOOL)a3;
+ (BOOL)shouldForceDowngradeScale;
+ (long long)feedComponentLargeFontAdaptMode;
+ (BOOL)enableIncentiveIMLargeFontAdaptation;
+ (BOOL)enableFeedLargeFontOptRisk;
+ (BOOL)enableFeedLargeFontOptInnerTimeStamp;
+ (BOOL)enableFeedLargeFontOptBtn;
+ (BOOL)enableFeedLargeFontOptPOICommentTag;
+ (id)feedAdaptiveFontWithFontSize:(double)a0 weight:(long long)a1 isFixed:(BOOL)a2;


@end
