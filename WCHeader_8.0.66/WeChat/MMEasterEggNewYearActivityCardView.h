@class MMWebImageView, WCPlayerHttpMediaWrap, MMEasterEggNewYearActivityReportObject, WCPlayerConfigControlView, UIButton, UIView, MMUILabel, NSString, MMEasterEggNewYearActivityInfo, MMEasterEggNewYearActivityMaterialInfo, WCPlayerPlayArgs, WCPlayerView, UIImageView;
@protocol MMEasterEggNewYearActivityCardViewDelegate;

@interface MMEasterEggNewYearActivityCardView : UIView

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIImageView *backgroundImageView;
@property (weak, nonatomic) MMWebImageView *brandLogoImageView;
@property (weak, nonatomic) MMUILabel *brandNameLabel;
@property (weak, nonatomic) MMUILabel *titleLabel;
@property (weak, nonatomic) MMUILabel *subtitleLabel;
@property (weak, nonatomic) MMWebImageView *creativeImageView;
@property (weak, nonatomic) MMUILabel *moneyAmountLabel;
@property (weak, nonatomic) MMUILabel *moneyMeasureLabel;
@property (weak, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) WCPlayerView *creativeVideoView;
@property (weak, nonatomic) WCPlayerConfigControlView *creativeVideoControlView;
@property (retain, nonatomic) WCPlayerPlayArgs *creativeVideoPlayerInfo;
@property (retain, nonatomic) WCPlayerHttpMediaWrap *creativeVideoMediaWrap;
@property (weak, nonatomic) id<MMEasterEggNewYearActivityCardViewDelegate> delegate;
@property (retain, nonatomic) MMEasterEggNewYearActivityInfo *activityInfo;
@property (retain, nonatomic) MMEasterEggNewYearActivityMaterialInfo *materialInfo;
@property (retain, nonatomic) MMEasterEggNewYearActivityReportObject *reportObject;
@property (nonatomic) BOOL buttonEnabled;
@property (retain, nonatomic) NSString *buttonTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transformButtonToOpenMoneyStyle;
- (void)setupBrandHeader;
- (void)setupTitleAndSubtitle;
- (void)setupCreativeView;
- (void)setupActionButton;
- (void)layoutSubviews;
- (double)estimatedHeight;
- (void)didShow;
- (void)pauseVideoIfNeeded;
- (void)resumeVideoIfNeeded;
- (void)closeViewController;
- (id)createPlayerConfig;
- (id)createMediaWrapFromURL:(id)a0;
- (id)createPlayerInfoFromMediaWrap:(id)a0;
- (void)onTapActionButton;
- (void).cxx_destruct;

@end
