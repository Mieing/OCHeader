@class MMMusicMVTrackItem, NSString, UIImageView, MMMusicMVSingleVideoItemView, MMMusicNoAnyVideoView, UILabel, UIView;
@protocol MMMusicMVEpisodeItemCellViewDelegate;

@interface MMMusicMVEpisodeItemCellView : UIView <UIGestureRecognizerDelegate, MMMusicMVSingleVideoItemViewDelegate, MMMusicNoAnyVideoViewPlayerDelegate>

@property (retain, nonatomic) MMMusicNoAnyVideoView *noVideoView;
@property (retain, nonatomic) MMMusicMVSingleVideoItemView *singleVideoView;
@property (retain, nonatomic) UIImageView *videoHiddenPromptImageView;
@property (retain, nonatomic) UILabel *videoHiddenPromptLabel;
@property (retain, nonatomic) UIView *videoCoverView;
@property (weak, nonatomic) id<MMMusicMVEpisodeItemCellViewDelegate> delegate;
@property (retain, nonatomic) MMMusicMVTrackItem *trackItem;
@property (nonatomic) unsigned long long episodeIndex;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL isShowPromptLabel;
@property (nonatomic) BOOL forbidPlaying;
@property (nonatomic) BOOL isFullScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupNoVideoView;
- (void)setupVideoHiddenPrompt;
- (void)reportVideoPlayStatictics;
- (void)prepareForReuse;
- (void)setupSingleVideoView;
- (void)setTrackItem:(id)a0 videoInitialTime:(double)a1;
- (void)setTrackItem:(id)a0 videoInitialTime:(double)a1 autoPlay:(BOOL)a2;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void)onVideoTogglePostOperation;
- (void)onVideoToggleJumpFinderProfileOperation:(id)a0;
- (BOOL)isMusicMVSingleVideoItemViewInUse:(id)a0;
- (void)onLiveVideoPlayerViewShowBufferingView;
- (void)onLiveVideoPlayerViewHideBufferingView;
- (void)mvSingleVideoItemView:(id)a0 didUpdateVideoCurrentTime:(double)a1 bufferPosition:(double)a2;
- (void)singleVideoItemView:(id)a0 onPlayerVideoFrameOut:(id)a1;
- (void)singleVideoItemView:(id)a0 onImageFrameOut:(id)a1;
- (id)singleVideoItemView:(id)a0 finderDataItemForTrack:(id)a1;
- (void)onVideoBeginBuffering:(unsigned int)a0;
- (void)onVideoEndBuffering:(unsigned int)a0;
- (void)reloadData;
- (void)hideVideoPlayerView;
- (void)showVideoPlayerView;
- (void)seekCurrentVideoPlay:(double)a0;
- (void)seekCurrentVideoPlay:(double)a0 autoPlay:(BOOL)a1;
- (void)startCurrentVideoPlay;
- (void)stopCurrentVideoPlay;
- (double)currentVideoPlayedTime;
- (void)pauseCurrentVideoPlay;
- (void)setForbidPlaying:(BOOL)a0 reset:(BOOL)a1;
- (void)setNoVideoViewPromptAlpha:(double)a0;
- (void).cxx_destruct;

@end
