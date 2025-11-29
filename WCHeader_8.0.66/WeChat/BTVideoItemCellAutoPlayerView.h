@class WCPlayerPlayArgs, NSString, BTVideoItemCellAutoMediaWrap, WCPlayerView;
@protocol BTVideoItemCellAutoPlayerDelegate;

@interface BTVideoItemCellAutoPlayerView : WCPlayerControlView {
    WCPlayerView *m_retainPlayerView;
    unsigned long long m_lastPlayerState;
    unsigned long long m_lastProcessState;
    WCPlayerView *_playerView;
}

@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (retain, nonatomic) BTVideoItemCellAutoMediaWrap *mediaWrap;
@property (retain, nonatomic) NSString *videoPath;
@property (readonly, nonatomic) unsigned int nativeViewId;
@property (weak, nonatomic) id<BTVideoItemCellAutoPlayerDelegate> delegate;

- (void)initPlayerInfoWithVideoPath:(id)a0 initialTime:(double)a1;
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
- (void)play;
- (void)mutePlay;
- (void)pause;
- (void)stop;
- (void)seek:(double)a0;
- (id)syncCaptureVideo;
- (void)destroy;
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
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (id)playerView;
- (void)setPlayerView:(id)a0;
- (void).cxx_destruct;

@end
