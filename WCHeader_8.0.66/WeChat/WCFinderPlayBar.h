@class WCPlayerView, NSString, WXVideoSlider, UILabel, UIButton;
@protocol WCFinderPlayBarDelegate;

@interface WCFinderPlayBar : UIView <WCPlayerControlProtocol>

@property (retain, nonatomic) UIButton *playButton;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) WXVideoSlider *playSlider;
@property (retain, nonatomic) UILabel *countTimeLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) double moveBeginProgress;
@property (weak, nonatomic) WCPlayerView *playerView;
@property (weak, nonatomic) id<WCFinderPlayBarDelegate> playerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playBarWithMakeView:(id /* block */)a0;

- (void)setupUIWithMakeView:(id /* block */)a0;
- (void)reMake:(id /* block */)a0;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)startLoading;
- (void)stopLoading;
- (void)stop;
- (double)playPosition;
- (void)setPlayPosition:(double)a0 andLength:(double)a1;
- (void)onPlayToggle;
- (void)onPause;
- (void)onPlay;
- (void)onSliderScrubbBegin;
- (void)onSliderChange:(id)a0;
- (void)onSliderScrubbEnd:(id)a0;
- (void)movePositionBegin;
- (void)movePositionChange:(double)a0;
- (void)movePositionEnd;
- (void)updateTimeLabelAt:(double)a0;
- (double)getPlayVideoTotalTime;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onVideoDidPlayToEndTime;
- (void)onCreateThumbImage:(id)a0;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)showPercentView;
- (void)hiddenPercentView;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)onPlaybackCurTimeUpdate:(double)a0;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)updateVideoBufferPercent:(double)a0;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)updateVideoCurrentTime:(double)a0;
- (void).cxx_destruct;

@end
