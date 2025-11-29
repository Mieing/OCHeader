@class UIView, MMWebImageView, MMFinderLiveBannerInfo, UIImageView, MMUIView, MMFinderLiveTaskId, CAGradientLayer, FinderJumpInfo_NativeInfo, MMUILabel, MMUIButton;
@protocol MMLiveCNYSharePageSheetDelegate;

@interface MMLiveCNYSharePageSheet : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) FinderJumpInfo_NativeInfo *oriInfo;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *backgroundBottomDecorationView;
@property (retain, nonatomic) MMUILabel *shareTitleLabel;
@property (retain, nonatomic) MMUILabel *shareIntroductionLabel;
@property (retain, nonatomic) MMWebImageView *shareResultPreviewView;
@property (retain, nonatomic) MMUIButton *shareActionBtn;
@property (retain, nonatomic) MMUILabel *sponsorInfoLabel;
@property (weak, nonatomic) id<MMLiveCNYSharePageSheetDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveBannerInfo *bannerInfo;

- (id)initWithTaskId:(id)a0 info:(id)a1;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (id)sponsorFont;
- (void)setupViewsContent;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutShareContent;
- (void)onClickShareActionBtn;
- (void)setupSponsorInfoLabel;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)configSponsorLabel:(int)a0;
- (id)createTitleDisplayStr:(int)a0;
- (id)createIntroductionDisplayStr:(int)a0;
- (void).cxx_destruct;

@end
