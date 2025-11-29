@class MJGradientView, WCAudioModuleProxy, MJShootRedPacketResponseInfo, AVPlayerItem, MJShootComposingViewModel, UIImageView, MMUIView, WCProgressMaskView, AVPlayerLayer, MMUIButton, AVPlayer;
@protocol MJShootPlayerViewControllerDelegate;

@interface MJShootPlayerViewController : MMUIViewController

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) WCAudioModuleProxy *auidoModuleProxy;
@property (retain, nonatomic) WCProgressMaskView *progressMaskView;
@property (retain, nonatomic) MMUIView *playerBackgroundView;
@property (retain, nonatomic) MMUIButton *exitButton;
@property (retain, nonatomic) MMUIButton *completeButton;
@property (retain, nonatomic) MJGradientView *bottomGradientView;
@property (retain, nonatomic) MMUIView *bottomBar;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly, nonatomic) MJShootRedPacketResponseInfo *responseInfo;
@property (readonly, nonatomic) MJShootComposingViewModel *viewModel;
@property (weak, nonatomic) id<MJShootPlayerViewControllerDelegate> delegate;

- (id)initWithViewModel:(id)a0 responseInfo:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupExitButton;
- (void)setupBottomBar;
- (void)layoutPreviewView:(id)a0;
- (void)setupForImagePreview;
- (void)setupImageView;
- (void)setupForVideoPreview;
- (void)setupVideoPlayer;
- (void)bindViewsForVideoPreview;
- (BOOL)isPlaying;
- (void)startPlaying;
- (void)stopPlaying;
- (void)playerItemDidPlayToEndTime:(id)a0;
- (void)playerItemFailedToPlayToEndTime:(id)a0;
- (void)exitButtonTouchUpInside:(id)a0;
- (void)completeButtonTouchUpInside:(id)a0;
- (void)_showExportProgressView;
- (void)_removeExportProgressView;
- (void)onApplicationWillEnterForegroundNotification:(id)a0;
- (void)onApplicationDidEnterBackgroundNotification:(id)a0;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;

@end
