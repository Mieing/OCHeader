@class AWEAssetsFragmentInfo, AWEAssetsCropAndClipViewModel, UIImageView, ACCPlaybackView, AVURLAsset, AWEAssetsCropPlayerControlView, UIButton;

@interface AWEVideoAssetsCropEditView : AWEAssetsCropEditBaseView

@property (retain, nonatomic) AWEAssetsCropPlayerControlView *videoPlayerControlView;
@property (retain, nonatomic) ACCPlaybackView *videoPlayerView;
@property (retain, nonatomic) UIImageView *staticImageViewForLivePhoto;
@property (retain, nonatomic) UIButton *livePhotoSwitchButton;
@property (nonatomic) struct CGSize { double width; double height; } videoOriginalSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curTimeOffset;
@property (retain, nonatomic) id playerObserver;
@property (nonatomic) BOOL isPauseByOthers;
@property (nonatomic) BOOL isPauseByDisappear;
@property (retain, nonatomic) AWEAssetsCropAndClipViewModel *viewModel;
@property (retain, nonatomic) AWEAssetsFragmentInfo *fragment;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } currentTimeRange;
@property (copy, nonatomic) id /* block */ playTimeCallback;
@property (copy, nonatomic) id /* block */ currentPlayTimeCallback;
@property (copy, nonatomic) id /* block */ playerStatusCallback;
@property (copy, nonatomic) id /* block */ livePhotoStatusCallback;

- (void)p_appWillResignActive:(id)a0;
- (void)p_appDidBecomeActive:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fragment:(id)a1 viewModel:(id)a2;
- (void)changeTimeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)pauseBySlide;
- (void)playIfPauseBySlide;
- (void)changeTimeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateTimeDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateTimeStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)handleContainerViewTapped:(id)a0;
- (double)limitYWithHeight:(double)a0;
- (struct CGSize { double x0; double x1; })contentSizeWithUpdate:(BOOL)a0;
- (id)assetContentView;
- (void)scrollViewDidChangeMovingState:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fragment:(id)a1;
- (void)switchLivePhotoPlayState:(long long)a0;
- (void)onPlaybackFinished;
- (void)didPlayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)switchLivePhotoPlayState;
- (double)viewCropVideoYGap;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (void)refreshTime;
- (void)setupUI;
- (double)expectedHeight;

@end
