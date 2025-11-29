@class WCPlayerPlayArgs, NSString, WCFinderFeedMediaWrap, WCPlayerView, MMWebNativeVideoMediaWrap;
@protocol MMWebNativeVideoPlayerDelegate;

@interface MMWebNativeVideoPlayerView : UIView <WCPlayerControlProtocol> {
    WCPlayerView *m_retainPlayerView;
    unsigned long long m_lastPlayerState;
    unsigned long long m_lastProcessState;
}

@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) MMWebNativeVideoMediaWrap *webMediaWrap;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) WCFinderFeedMediaWrap *finderMediaWrap;
@property (readonly, nonatomic) unsigned int nativeViewId;
@property (weak, nonatomic) id<MMWebNativeVideoPlayerDelegate> delegate;
@property (weak, nonatomic) WCPlayerView *playerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)playerCountGlobal;

- (void)trySetupDefaultPlayArgs;
- (void)initDefaultPlayerInfoWithVideoPath:(id)a0 initialTime:(double)a1;
- (void)initFinderPlayerInfoWithInitialTime:(double)a0 mediaWrap:(id)a1 playArgs:(id)a2;
- (void)updateMediaWrapWithDownloadConfiguration:(id)a0;
- (void)enableQuic;
- (id)mediaWrap;
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
- (void)setVideoPath:(id)a0 initialTime:(double)a1;
- (void)setFinderMediaWrap:(id)a0 playerInfo:(id)a1 initialTime:(double)a2;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seek:(double)a0;
- (id)syncCaptureVideo;
- (void)destroy;
- (id)corePlayerView;
- (id)genAvPlayerView;
- (BOOL)isPlaying;
- (double)currentPlayedTime;
- (struct CGSize { double x0; double x1; })videoSize;
- (double)videoDuration;
- (unsigned int)playerType;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoBeginPlay;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onPlayerSeekCompelete:(double)a0;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void)onPlayerProcessStateChanged:(unsigned long long)a0;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void)updateVideoBufferPercent:(double)a0;
- (void)onVideoPlayFinish;
- (void)onCreateThumbImage:(id)a0;
- (void)showThumbImageView;
- (void)hiddenThumbImageView;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)onDataSourceChangeStart:(id)a0;
- (void)onDataSourceChangeSucc:(id)a0;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void).cxx_destruct;

@end
