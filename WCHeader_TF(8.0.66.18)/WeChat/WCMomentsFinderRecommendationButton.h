@class RichTextView, WCMomentsFinderRecommendationViewModel, UIImageView, SightIconView, UIView, NSMutableArray, MMUILabel;

@interface WCMomentsFinderRecommendationButton : MMUIButton

@property (retain, nonatomic) UIView *bannerContainerView;
@property (retain, nonatomic) NSMutableArray *headImageViews;
@property (retain, nonatomic) MMUILabel *seeLabel;
@property (retain, nonatomic) RichTextView *userTextView;
@property (retain, nonatomic) RichTextView *contentTypeTextView;
@property (retain, nonatomic) UIImageView *finderLogoView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) RichTextView *singleRichTextView;
@property (retain, nonatomic) UIView *cardContainerView;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) RichTextView *descriptionTextView;
@property (retain, nonatomic) WCMomentsFinderRecommendationViewModel *viewModel;

+ (double)heightForViewModel:(id)a0;
+ (double)heightForBannerView:(id)a0;
+ (double)heightForCardView:(id)a0;
+ (id)createSingleRichTextView;
+ (void)updateRichTextView:(id)a0 withFont:(id)a1;

- (void)initParamsForReporter;
- (void)updateParamsForReporter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSubviews;
- (void)reloadBannerViews;
- (void)loadBannerContainerView;
- (void)reloadHeadImageViews;
- (id)createHeadImageView;
- (void)reloadSeeLabel;
- (void)reloadUserTextView;
- (void)reloadContentTypeTextView;
- (void)updateContentTypeTextView:(BOOL)a0;
- (void)loadFinderLogoView;
- (void)loadArrowImageView;
- (void)reloadSingleRichTextView;
- (void)reloadCardViews;
- (void)loadCardContainerView;
- (void)loadSeparatorLine;
- (void)reloadThumbImageView;
- (void)reloadDescriptionTextView;
- (void)updateAccessibility;
- (void)fitSizeAndSubviews;
- (void)_fitSizeAndLayoutContainerViews;
- (void)_Banner_fitContentForSubviews;
- (void)_Banner_fitSizeAndLayoutSubviews;
- (void)_Banner_AC_fitContentForSubviews;
- (void)_Banner_AC_fitSizeAndLayoutSubviews;
- (void)_Banner_BD_fitContentForSubviews;
- (void)_Banner_BD_fitSizeAndLayoutSubviews;
- (void)_Banner_E_fitContentForSubviews;
- (void)_Banner_E_fitSizeAndLayoutSubviews;
- (void)_Banner_E_SingleText_fitContentForSubviews;
- (void)_Banner_E_SingleText_fitSizeAndLayoutSubviews;
- (void)_Card_fitSizeAndLayoutSubviews;
- (void)layoutHeadImageViews:(id)a0 fromLeft:(double)a1 toRightEx:(out double *)a2 centerY:(double)a3;
- (void)layoutHeadImageViews:(id)a0 fromRight:(double)a1 toLeftEx:(out double *)a2 centerY:(double)a3;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
