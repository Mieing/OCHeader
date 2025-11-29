@class UIView, IESECVideoPlayerConfig, IESECImageModel, IESECBackgroundDescribeInfo, IESECGoodsDetailReplayResponse, IESECGoodsDetailLiveReplayFloatEntryDataModel, IESECGoodsDetailLiveReplayFloatEntryMetaModel, IESECLLDCImageView, LOTAnimationView, IESECUIImageView, IESECGoodsDetailLiveReplayFloatEntryViewModel;
@protocol IESECPDPVideoPlayerViewProtocol;

@interface IESECGoodsDetailLiveReplayFloatEntryMediaView : UIView

@property (retain, nonatomic) IESECGoodsDetailLiveReplayFloatEntryDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailLiveReplayFloatEntryViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailLiveReplayFloatEntryMetaModel *metaModel;
@property (retain, nonatomic) UIView *iconBGView;
@property (retain, nonatomic) IESECUIImageView *videoBGView;
@property (retain, nonatomic) IESECLLDCImageView *normalImageView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) IESECVideoPlayerConfig *replayVideoConfig;
@property (retain, nonatomic) UIView<IESECPDPVideoPlayerViewProtocol> *replayVideoView;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) double animationTime;
@property (nonatomic) BOOL normalStateEnable;
@property (nonatomic) BOOL livingStateEnable;
@property (nonatomic) BOOL replayStateEnable;
@property (retain, nonatomic) IESECImageModel *normalImageModel;
@property (nonatomic) struct CGSize { double width; double height; } normalIconSize;
@property (nonatomic) struct CGSize { double width; double height; } normalSize;
@property (retain, nonatomic) IESECBackgroundDescribeInfo *videoBGImageModel;
@property (retain, nonatomic) IESECImageModel *animationLottieModel;
@property (retain, nonatomic) IESECGoodsDetailReplayResponse *replayVideoModel;
@property (nonatomic) struct CGSize { double width; double height; } replayVideoSize;

- (id)replayVideoPlayerView;
- (BOOL)disableNormalAndLivingState;
- (id)configHeadMoreVideoFloatBG:(id)a0;
- (void)updateVideoBGImageModelUseBgSize:(BOOL)a0;
- (void)updateReplayVideoSize;
- (void)configVideoPlayer:(id)a0;
- (BOOL)disableReplayState;
- (void)updateNormalSize;
- (id)lottieViewWithName:(id)a0;
- (void)animateToNormalAndLivingState;
- (void)animateToReplayState;
- (void)updateNormalImageModel;
- (void)updateNormalIconSize;
- (void)updateAnimationLottieModel;
- (void)updateReplayVideoModel;
- (void)configWithVideoModel:(id)a0;
- (struct CGSize { double x0; double x1; })replayVideoModelSize;
- (void)setViewState:(unsigned long long)a0 WithAnimateDurition:(double)a1;
- (void)replayShouldPause:(BOOL)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
