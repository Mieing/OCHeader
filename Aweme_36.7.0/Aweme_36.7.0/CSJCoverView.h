@class UIView, CSJStarView, CSJDislikeButton, CSJNativeAd, UIImageView, UIButton, CSJAdInfoViewModel, UIVisualEffectView, UILabel;
@protocol CSJCoverViewDelegate;

@interface CSJCoverView : UIView

@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;
@property (nonatomic) BOOL isVideoBackup;
@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) CSJDislikeButton *dislikeButton;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *ADXLabel;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) CSJStarView *starView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *barBackgroundImgView;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<CSJCoverViewDelegate> delegate;
@property (readonly, nonatomic) double playerCurrentTime;
@property (readonly, nonatomic) double playerTotalTime;
@property (nonatomic) long long convertActionType;

+ (id)coverViewWithRecommendViewSize:(struct CGSize { double x0; double x1; })a0 nativeAd:(id)a1 needRemovePlayerView:(BOOL *)a2 isVideoBackup:(BOOL *)a3;

- (void)updateWithDarkMode:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nativeAd:(id)a1;
- (id)adExtraDataDtictionary:(id)a0;
- (void)safeDelegate_coverViewClick:(id)a0 areaCategory:(long long)a1 clickExtraInfo:(id)a2;
- (void)safeDelegate_coverViewClickClose:(id)a0 clickExtraInfo:(id)a1;
- (void)safeDelegate_coverViewClickAdLogo:(id)a0;
- (void)dislikeButtonTouchUpInside:(id)a0;
- (void)downloadButtonTouchUpInside:(id)a0;
- (void)safeDelegate_coverViewClickDownload:(id)a0 clickExtraInfo:(id)a1;
- (void)backViewAction:(id)a0;
- (void)logoImageViewAction;
- (void)pbu_fillDataWithImageView:(id)a0 imageURLString:(id)a1;
- (void)pbu_fillData_mainImageView;
- (void)pbu_fillData_titleLabel;
- (void)pbu_fillData_descriptionLabel;
- (void)pbu_fillData_iconImageView;
- (void)pbu_fillData_downloadButton;
- (void)pbu_fillData_starView;
- (void)pbu_fillData_scoreLabel;
- (void)pbu_fillData_ADXLabel;
- (void)safeDelegate_coverViewClickVideo:(id)a0;
- (void)pbu_override_buildView;
- (void)pbu_override_buildViewData;
- (id)playerViewContainerView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
