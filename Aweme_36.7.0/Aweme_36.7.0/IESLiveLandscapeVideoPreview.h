@class IESLiveLandscapeProgressBar, NSString, IESLiveImageView, IESLiveVideoPlayerController, UILabel, IESLiveWebpLoadingView;

@interface IESLiveLandscapeVideoPreview : UIView <IESLiveVideoPlayerControllerDelegate>

@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (retain, nonatomic) IESLiveImageView *cover;
@property (retain, nonatomic) IESLiveImageView *playIconView;
@property (retain, nonatomic) IESLiveLandscapeProgressBar *progressBar;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UILabel *playTimeLabel;
@property (nonatomic) BOOL isVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerController:(id)a0 currentPlayTime:(double)a1 playableTime:(double)a2 duration:(double)a3;
- (void)mute:(BOOL)a0;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 updateProgress:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)loadLocalVideoURL:(id)a0;
- (void)loadVideoURL:(id)a0 cacheKey:(id)a1;
- (void)loadVideoVid:(id)a0;
- (id)playTimeFrom:(long long)a0;
- (void)onTapVideoAction:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setupViews;

@end
