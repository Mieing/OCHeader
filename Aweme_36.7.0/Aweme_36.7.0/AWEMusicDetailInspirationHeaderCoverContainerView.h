@class AWEMusicDetailHeaderDataHelper, UIView, AWEMusicDetailHeaderLayoutInspirationLayoutManager, UIImage, CADisplayLink, UIImageView, CAShapeLayer, AWEMusicDetailMusicCardViewConfig, CAGradientLayer, AWEMusicDetailHeaderCountDownLabel, UILabel;
@protocol AWEMusicDetailHeaderCoverContainerViewDelegate;

@interface AWEMusicDetailInspirationHeaderCoverContainerView : UIView

@property (weak, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) AWEMusicDetailHeaderLayoutInspirationLayoutManager *layoutManager;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *vinylImageView;
@property (retain, nonatomic) UIView *coverStrokeView;
@property (retain, nonatomic) UIView *coverBgView;
@property (retain, nonatomic) UIImage *downgradingCoverImage;
@property (retain, nonatomic) CAGradientLayer *coverMaskLayer;
@property (retain, nonatomic) CAShapeLayer *coverCornerLayer;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) AWEMusicDetailHeaderCountDownLabel *countDownLabel;
@property (retain, nonatomic) UIImageView *lunaIconImageView;
@property (retain, nonatomic) UILabel *musicCoverInfoLabel;
@property (retain, nonatomic) UIView *musicCoverInfoLabelContainer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) AWEMusicDetailMusicCardViewConfig *cardConfig;
@property (retain, nonatomic) UIImageView *diskNeedleView;
@property (retain, nonatomic) UIView *diskBackCoverContainer;
@property (retain, nonatomic) UIImageView *diskBackCoverView;
@property (retain, nonatomic) UIView *diskBackCoverBorderView;
@property (retain, nonatomic) UIImageView *diskBackCoverBlurView;
@property (retain, nonatomic) UIImageView *diskView;
@property (retain, nonatomic) UIImageView *diskColorView;
@property (weak, nonatomic) id<AWEMusicDetailHeaderCoverContainerViewDelegate> delegate;

- (void)hideCoverPlayIconAndText:(BOOL)a0;
- (void)musicServiceReadyToPlay:(id)a0;
- (void)addGaussianBlurForView:(id)a0 withImage:(id)a1 radis:(double)a2;
- (void)weakBindDataHelper:(id)a0;
- (void)onDisplayRefresh;
- (void)p_updateCoverContainerAccessibilityContentWithPlayerStatus:(long long)a0;
- (void)updateDummyHeaderView;
- (void)updateCountDownLabelWithMusicServiceStatus:(long long)a0;
- (void)refreshMusicServiceStatus:(long long)a0;
- (void)sendHeaderRefreshColorNoticWithColor:(id)a0;
- (void)updateCoverLeftCorner;
- (void)updateCoverCorner;
- (void)animateNeedleToPlayWithAnimate:(BOOL)a0;
- (void)animateNeedleToPause;
- (void)rotateDisk;
- (void)didClickCoverImageView;
- (void)didClickPlayIcon;
- (id)initWithLayoutManager:(id)a0 withCardConfig:(id)a1;
- (void)updateCoverContainerView;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)dealloc;
- (void)_stopAnimation;
- (void)setupUI;

@end
