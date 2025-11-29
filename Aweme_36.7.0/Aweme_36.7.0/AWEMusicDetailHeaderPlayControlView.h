@class UIView, AWEMusicDetailHeaderDataHelper, CADisplayLink, AWEMusicDetailHeaderLayoutInspirationLayoutManager, UIImageView, UIButton, YYLabel, AWEMusicDetailHeaderCountDownLabel, UILabel;
@protocol AWEMusicDetailHeaderPlayControlViewDelegate;

@interface AWEMusicDetailHeaderPlayControlView : UIView

@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) AWEMusicDetailHeaderCountDownLabel *countDownLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIButton *editTitleNewButton;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (weak, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) AWEMusicDetailHeaderLayoutInspirationLayoutManager *layoutManager;
@property (weak, nonatomic) id<AWEMusicDetailHeaderPlayControlViewDelegate> delegate;

- (void)musicServiceReadyToPlay:(id)a0;
- (void)weakBindDataHelper:(id)a0;
- (id)initWithLayoutManager:(id)a0;
- (void)updateControlView;
- (void)onDisplayRefresh;
- (void)p_updateCoverContainerAccessibilityContentWithPlayerStatus:(long long)a0;
- (void)p_updateCountDownLabelLayoutWithDuration:(double)a0;
- (void)p_didClickChangePlayStatus;
- (void)p_didClickTitle;
- (void)editTitleClick;
- (void)updateDummyHeaderView;
- (void)updateDetailPlayControlView;
- (void)updateDetailPlayControlViewConstraint;
- (void)updateCountDownLabelWithMusicServiceStatus:(long long)a0;
- (void)refreshMusicServiceStatus:(long long)a0;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)dealloc;
- (void)_stopAnimation;
- (void)setupUI;

@end
