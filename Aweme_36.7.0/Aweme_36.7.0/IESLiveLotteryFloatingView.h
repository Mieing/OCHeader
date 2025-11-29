@class IESLiveLotteryStore, RACDisposable, UIImageView, IESLiveLotteryConfig, UIView, UILabel, UIButton;
@protocol IESLiveWebPPlayer;

@interface IESLiveLotteryFloatingView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIButton *lotteryButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *bgAnimateViewWithinLastSecs;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) RACDisposable *countDowndispose;
@property (nonatomic) BOOL isTrggerCountdownTemporary;
@property (retain, nonatomic) IESLiveLotteryConfig *config;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *centerBgView;
@property (retain, nonatomic) UIView *bgImageSizeView;
@property (retain, nonatomic) IESLiveLotteryStore *store;
@property (retain, nonatomic) UILabel *candidateLabel;
@property (retain, nonatomic) UILabel *tempStatusTitleLabel;
@property (retain, nonatomic) UILabel *tempStatusNumLabel;
@property (copy, nonatomic) id /* block */ stopTempStatusCompletion;

- (void)updateTime:(long long)a0;
- (void)updateIconImage:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (BOOL)withinLastAnimationSeconds:(long long)a0;
- (BOOL)lastSecAnimationEnable;
- (void)startLastSecAnimation;
- (void)stopLastSecAnimation;
- (void)startTempStatusWithTitle:(id)a0 desc:(id)a1;
- (id)obfuscationLuckyCount:(long long)a0;
- (void)showTimeCountDown;
- (void)startTempStatus;
- (void)stopTempStatus;
- (void)updateTempStatusNumLabel;
- (void)updateCandidateLabel;
- (void)updateTempStatusLabel;
- (void)updateIconText:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)fontDescriptor;
- (void)dealloc;

@end
