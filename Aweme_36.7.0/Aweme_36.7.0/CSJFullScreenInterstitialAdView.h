@class CSJStarView, NSString, CSJAdSlot, UITapGestureRecognizer, UIImageView, CSJRewardedVideoDownloadBarView, CSJMaterialMeta, CSJInterstitialCoverView, UIButton, UILabel;
@protocol CSJFullScreenInterstitialAdDelegate;

@interface CSJFullScreenInterstitialAdView : UIView <CSJRewardedVideoDownloadBarDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *adImageView;
@property (retain, nonatomic) UIImageView *adAppIconImageView;
@property (retain, nonatomic) UILabel *adTitleLabel;
@property (retain, nonatomic) UILabel *adDescriptionLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) CSJStarView *starView;
@property (retain, nonatomic) UIButton *adDownloadButton;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *ADXLabel;
@property (retain, nonatomic) CSJRewardedVideoDownloadBarView *adDownloadBarView;
@property (retain, nonatomic) CSJInterstitialCoverView *interstitialCoverView;
@property (nonatomic) unsigned long long imageStyle;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) UITapGestureRecognizer *adTapGesture;
@property (weak, nonatomic) id<CSJFullScreenInterstitialAdDelegate> intersitialDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)configureImageStyleWith:(id)a0;
+ (id)fullScreenInterstitialAdViewWithMaterial:(id)a0 adSlot:(id)a1;

- (id)adExtraDataDtictionary:(id)a0;
- (void)adTapGestureAction:(id)a0;
- (struct CGSize { double x0; double x1; })textString:(id)a0 size:(struct CGSize { double x0; double x1; })a1 font:(id)a2;
- (id)initWithMaterial:(id)a0 adSlot:(id)a1 imageStyle:(unsigned long long)a2;
- (void)logoImageViewAction;
- (id)c_xyDict;
- (void)downloadBarTapped:(id)a0 extraDic:(id)a1;
- (void)downloadButtonTapped:(id)a0 extraDic:(id)a1;
- (id)c_xyDict_secWithTapView:(id)a0;
- (void)adAction:(id)a0;
- (void)dislikeButtonTapped:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)interstitialPlayer;
- (void)layoutSubviews;
- (void)closeButtonTapped:(id)a0;

@end
