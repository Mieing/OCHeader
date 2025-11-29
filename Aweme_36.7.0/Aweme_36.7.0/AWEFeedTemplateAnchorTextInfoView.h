@class AWEFeedTemplateAnchorTextInfoUIConfig, BDImageView, UILabel, AWECodeGenAnchorTextInfoModel;

@interface AWEFeedTemplateAnchorTextInfoView : UIView

@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *textInfoModel;
@property (retain, nonatomic) AWEFeedTemplateAnchorTextInfoUIConfig *defaultUIConfig;
@property (retain, nonatomic) UILabel *preSeparator;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) BDImageView *extendedIcon;
@property (retain, nonatomic) UILabel *extendedLabel;
@property (nonatomic) BOOL isUsingExtend;

- (void)configIconWithIconInfoModel:(id)a0;
- (BOOL)shouldShowMainLabel;
- (BOOL)shouldShowExtendedLabel;
- (BOOL)shouldShowExtendedIcon;
- (void)updateVisibilityForSubViews;
- (id)getHighestView;
- (id)initWithDefaultConfig:(id)a0;
- (void)configWithTextInfoModel:(id)a0;
- (void)layoutTextInfoView;
- (BOOL)hasSubViewToDisplay;
- (void)updateMainLabelText:(id)a0;
- (void)updateMainLabelTextColor:(id)a0;
- (double)currentContentWidth;
- (BOOL)applyTextTruncationWithContentWidth:(double)a0 maxContainerWidth:(double)a1 shouldOmitTotally:(BOOL)a2;
- (id)mainLabelText;
- (void)setupSubViews;
- (void).cxx_destruct;
- (BOOL)shouldShowSeparator;

@end
