@class AWEGradientView, UIVisualEffectView, UIImageView, UILabel, UIView, AWETheaterCommonSectionItem;
@protocol AWEVideoTryWatchViewProtocol;

@interface AWETheaterBannerInfoView : UIView

@property (retain, nonatomic) AWETheaterCommonSectionItem *sectionItem;
@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *tryWatchView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UILabel *lockLabel;
@property (retain, nonatomic) UILabel *bannerTitleLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *soundImageView;
@property (copy, nonatomic) id /* block */ tapSoundImageViewBlock;

- (void)updateTitleLabel:(id)a0;
- (void)configWithSectionItem:(id)a0;
- (void)updateSoundImageViewMuteStatus:(BOOL)a0;
- (void)updateSoundImageViewShowStatus:(BOOL)a0;
- (void)updateBannerTagShowStatus:(BOOL)a0;
- (void)configBannerTag:(id)a0;
- (void)configSoundImageView:(id)a0;
- (void)configTryWatch:(id)a0;
- (BOOL)p_enableShowTryWatch;
- (void)reloadCountDownDataWithModel:(id)a0;
- (void)showPaymentFinishView:(BOOL)a0;
- (void)soundImageViewTapped;
- (void)updatePaymentTryWatchViewCurrentTime:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;

@end
