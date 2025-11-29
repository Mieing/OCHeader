@class AWESkylightCellEntranceConfig, UIImageView, AWELiveSkylightPreviewManager, UIView, AWEGradientView, UILabel;
@protocol AWELiveFeedLabelTagProtocol, AWEFeedLiveMarkViewProtocol;

@interface AWESkylightCellEntranceView : UIView

@property (retain, nonatomic) AWESkylightCellEntranceConfig *config;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) UIView *topImageBackView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView<AWELiveFeedLabelTagProtocol> *iconTagView;
@property (retain, nonatomic) UIView *iconTagBackView;
@property (retain, nonatomic) UIView *tagLabelBackView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *iconPined;
@property (retain, nonatomic) UIView *redDot;
@property (nonatomic) double textDotWidth;
@property (nonatomic) BOOL isShowingRedDotAnimation;
@property (retain, nonatomic) UIView *waveAnimationView;
@property (retain, nonatomic) UIView<AWELiveFeedLabelTagProtocol> *fansTagView;
@property (retain, nonatomic) AWELiveSkylightPreviewManager *livePreviewManager;
@property (retain, nonatomic) UIView *livePreviewStreamView;
@property (nonatomic) BOOL previewStreamIsPlaying;
@property (retain, nonatomic) UIImageView *followMoreIcon;

+ (Class)aAWEConcernModuleServiceDOUYINJXAdapterClass;
+ (double)topAvatarCenterXOffset;

- (id)liveModuleService;
- (id)aAWEConcernModuleServiceDOUYINJXAdapter;
- (void)showRedDotAnimationWithComplition:(id /* block */)a0;
- (void)hideRedDot;
- (void)changeBreathAnimationState:(BOOL)a0;
- (void)setupDataWithConfig:(id)a0;
- (void)setupAvatarImageView;
- (void)setupAvatarPendant;
- (void)setupTagLabel;
- (void)setupDescLabel;
- (void)setupIconTag;
- (void)setupFansView;
- (void)configAvatar;
- (void)setIconTagHidden:(BOOL)a0;
- (void)setTagHidden:(BOOL)a0;
- (struct CGSize { double x0; double x1; })topImageBackViewSize;
- (void)setupRedDot;
- (struct CGSize { double x0; double x1; })avatarImageViewSize;
- (void)configStreamPreview;
- (void)stopStreamPreview;
- (struct CGSize { double x0; double x1; })followMoreIconSize;
- (void)setupLivePreviewView;
- (void)playStreamPreview;
- (void)setupWaveAnimationView;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (double)avatarWidth;

@end
