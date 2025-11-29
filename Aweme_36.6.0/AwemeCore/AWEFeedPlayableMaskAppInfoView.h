@class UILabel, NSArray, AWEFeedPlayableMaskModel, AWEFeedPlayableComplianceInfoModel, AWEFeedPlayableAppInfoView, UIView, AWEFeedPlayableAppRecommendView;

@interface AWEFeedPlayableMaskAppInfoView : UIView

@property (retain, nonatomic) UIView *appInfoView;
@property (retain, nonatomic) AWEFeedPlayableAppRecommendView *recommendImageView;
@property (retain, nonatomic) AWEFeedPlayableAppInfoView *starView;
@property (retain, nonatomic) AWEFeedPlayableAppInfoView *downloadView;
@property (retain, nonatomic) AWEFeedPlayableAppInfoView *fileSizeView;
@property (copy, nonatomic) NSArray *reverseViews;
@property (copy, nonatomic) NSArray *separatorLayers;
@property (retain, nonatomic) UILabel *companyLabel;
@property (retain, nonatomic) UILabel *versionLabel;
@property (retain, nonatomic) UILabel *permissionLabel;
@property (retain, nonatomic) UIView *topNoticeView;
@property (retain, nonatomic) AWEFeedPlayableMaskModel *maskInfo;
@property (retain, nonatomic) AWEFeedPlayableComplianceInfoModel *complianceInfo;

- (void)constraintSubviews;
- (void)layoutArrangedView;
- (BOOL)isCompleteInfo;
- (void)setupTopNoticeView;
- (void)setupArrangedView;
- (void)setupSeparatorLayer;
- (void)p_configPermission;
- (void)permissionLabelTapped:(id)a0;
- (void)configWithMaskModel:(id)a0 complianceInfo:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)hasRating;
- (double)viewHeight;

@end
