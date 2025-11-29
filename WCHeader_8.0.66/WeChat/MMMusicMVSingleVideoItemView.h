@class NSString, MMMusicLiveVideoPlayerView, MMMusicFadeOutLayer, UIImageView, UIView, MVImagePlayer, MMMusicMVTrackItem;
@protocol MMMusicMVSingleVideoItemViewDelegate;

@interface MMMusicMVSingleVideoItemView : UIView <MMMusicLiveVideoPlayerDelegate, MVImagePlayerDelegate>

@property (retain, nonatomic) MMMusicMVTrackItem *trackItem;
@property (retain, nonatomic) MMMusicLiveVideoPlayerView *playerView;
@property (retain, nonatomic) MMMusicFadeOutLayer *playerMaskLayer;
@property (retain, nonatomic) MVImagePlayer *imagePlayer;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *bgImageViewCover;
@property (retain, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *currentTid;
@property (copy, nonatomic) NSString *currentNonceId;
@property (nonatomic) BOOL bLongVideo;
@property (weak, nonatomic) id<MMMusicMVSingleVideoItemViewDelegate> delegate;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL forbidAutoplay;
@property (nonatomic) BOOL hideVideoView;
@property (nonatomic) unsigned long long videoEpisodeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)updateModel:(id)a0 videoEpisodeIndex:(unsigned long long)a1 initialTime:(double)a2;
- (void)updateModel:(id)a0 videoEpisodeIndex:(unsigned long long)a1 initialTime:(double)a2 fromAsyncGetData:(BOOL)a3;
- (id)getFinderDataItemWithTrack:(id)a0;
- (void)updateModel:(id)a0 videoEpisodeIndex:(unsigned long long)a1 initialTime:(double)a2 fromAsyncGetData:(BOOL)a3 autoPlay:(BOOL)a4;
- (void)layoutSubviews;
- (void)updateVideoAuthorNickName:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)reportVideoPlayStatictics;
- (void)prepareForReuse;
- (void)startVideoPlay;
- (void)seekVideoPlay:(double)a0;
- (void)pauseVideoPlay;
- (void)stopVideoPlay;
- (double)videoPlayedTime;
- (void)hideVideoPlayerView;
- (void)showVideoPlayerView;
- (BOOL)isVideoPlaying;
- (void)setupMaskLayerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)clearBgViewImage;
- (void)onVideoCurrTimeChanged:(double)a0 totalDuration:(double)a1 viewId:(unsigned int)a2;
- (void)onVideoPlay:(unsigned int)a0;
- (void)onVideoBeginBuffering:(unsigned int)a0;
- (void)onVideoEndBuffering:(unsigned int)a0;
- (void)onVideoPrepareToPlay:(unsigned int)a0 playBackInfo:(id)a1;
- (void)setupMaskLayerSizeWithVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)onVideoPause:(unsigned int)a0;
- (void)onVideoDidPlayToEndTime:(unsigned int)a0;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void)onVideoPlayerMediaInfoDidChange:(id)a0;
- (void)setupImagePlayer:(id)a0;
- (void)startImageShow:(id)a0;
- (void)mvImagePlayer:(id)a0 onVideoFrameOut:(id)a1;
- (void).cxx_destruct;

@end
