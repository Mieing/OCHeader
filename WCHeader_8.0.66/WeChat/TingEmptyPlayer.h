@class AVPlayer, NSString, NSDate;

@interface TingEmptyPlayer : MMUserService <MMServiceProtocol> {
    id /* block */ _pendingKeepAliveBlock;
    NSDate *_playStartTime;
    double _maxPlayDuration;
    BOOL _backgroundAudioEnable;
}

@property (class, readonly, nonatomic) TingEmptyPlayer *shared;

@property (readonly, nonatomic) AVPlayer *audioPlayer;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (void)removeObserver;
- (void)startKeepAliveAudio;
- (void)_startKeepAliveAudioImmediately;
- (void)playerItemDidReachEnd:(id)a0;
- (void)stopKeepAliveAudio;
- (void)stopKeepAliveAudio:(BOOL)a0;
- (void)commReport:(unsigned int)a0;
- (BOOL)openKeepAliveAudio;
- (void).cxx_destruct;

@end
