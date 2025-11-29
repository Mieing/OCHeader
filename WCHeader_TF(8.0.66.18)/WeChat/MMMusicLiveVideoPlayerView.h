@class MMMusicVideoStaticticsReporter, WCPlayerPlayArgs, NSString, WCPlayerView, WCFinderFeedMediaWrap;
@protocol MMMusicLiveVideoPlayerDelegate;

@interface MMMusicLiveVideoPlayerView : WCPlayerControlView <WCPlayerEventExt> {
    WCPlayerView *m_retainPlayerView;
    unsigned long long m_lastPlayerState;
    unsigned long long m_lastProcessState;
    double _clipOffsetSec;
    double _clipLengthSec;
    WCPlayerView *_playerView;
}

@property (retain, nonatomic) MMMusicVideoStaticticsReporter *videoReporter;
@property (nonatomic) double videoPlayDuration;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (readonly, nonatomic) unsigned int nativeViewId;
@property (nonatomic) unsigned long long videoEpisodeIndex;
@property (weak, nonatomic) id<MMMusicLiveVideoPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPlayerInfoWithMediaInfo:(id)a0 initialTime:(double)a1;
- (void)setAutoPlay:(BOOL)a0;
- (void)setLoop:(BOOL)a0;
- (void)setMuted:(BOOL)a0;
- (void)setPlayRate:(double)a0;
- (void)setPlayerContentMode:(long long)a0;
- (void)setAccurateSeek:(BOOL)a0;
- (void)setMinBufferLength:(float)a0 maxBufferLength:(float)a1;
- (void)setDownloadGrading:(float)a0;
- (void)setPreloadSec:(float)a0;
- (void)setBufferTimeArr:(id)a0;
- (id)initWithViewId:(unsigned int)a0 delegate:(id)a1;
- (void)dealloc;
- (void)resetPlayerStatus;
- (void)layoutSubviews;
- (void)setMediaInfo:(id)a0 videoEpisodeIndex:(unsigned long long)a1 initialTime:(double)a2 shouldPlay:(BOOL)a3;
- (float)calculateRateWithVideoDurationInSecond:(double)a0 clipLengthInSecond:(double)a1;
- (float)getCurrentPlayRate;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seek:(double)a0;
- (id)syncCaptureVideo;
- (void)destroy;
- (void)setClipOffsetSec:(double)a0 clipLengthSec:(double)a1;
- (void)reportVideoPlayStatictics;
- (id)genAvPlayerView;
- (BOOL)isPlaying;
- (double)currentPlayedTime;
- (struct CGSize { double x0; double x1; })videoSize;
- (double)videoDuration;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoBeginPlay;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onVideoDidPlayToEndTime;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (id)playerView;
- (void)setPlayerView:(id)a0;
- (void).cxx_destruct;

@end
