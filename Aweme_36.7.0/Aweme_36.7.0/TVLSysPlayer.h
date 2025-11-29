@class NSString, NSDictionary, TVLSysPlayerView, AVPlayer;
@protocol TVLPlayerController;

@interface TVLSysPlayer : TVLPlayerInternal {
    BOOL _hardwareDecodeEnabled;
    float _volume;
    float _speed;
    id<TVLPlayerController> _controller;
    NSDictionary *_SEI;
    unsigned long long _audioRenderDeviceType;
    long long _playbackState;
    long long _playerViewAlignMode;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) TVLSysPlayerView *showView;
@property (copy, nonatomic) NSString *contentURL;

- (void)applicationEnterBackground;
- (unsigned long long)audioRenderDeviceType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoCropAreaFrame;
- (void)setVideoCropAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlayerViewAlignMode:(long long)a0;
- (long long)playerViewAlignMode;
- (void)setAudioRenderDeviceType:(unsigned long long)a0;
- (void)setHardwareDecodeEnabled:(BOOL)a0;
- (void)releaze;
- (void)setSEI:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizeCropArea;
- (void)setNormalizeCropArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUseNormalizeCropArea:(BOOL)a0;
- (BOOL)useNormalizeCropArea;
- (id)playerCoreVersion;
- (void)replaceCurrentURLWithPlayURL:(id)a0 options:(id)a1;
- (BOOL)isHardwareDecodeEnabled;
- (id)getPlayerVersion;
- (void)resetViewPlayer;
- (long long)numberOfBytesPlayed;
- (void)drawBorderViewForTest;
- (id)SEI;
- (BOOL)isContainerOfPlayerCore:(id)a0;
- (void)addPlayItemKVO:(id)a0;
- (void)removePlayItemKVO:(id)a0;
- (void)receivePlayError:(id)a0;
- (void)applicationEnterForeground;
- (void)close;
- (id)controller;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setController:(id)a0;
- (long long)playbackState;
- (BOOL)isPlaying;
- (id)init;
- (void)stop;
- (void)setVolume:(float)a0;
- (id)versionInfo;
- (void)reset;
- (float)speed;
- (id)playerView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setSpeed:(float)a0;
- (void)dealloc;
- (float)volume;
- (void)setCustomHeader:(id)a0;
- (void)prepareToPlay;
- (long long)numberOfBytesTransferred;
- (id)requestInfo;
- (long long)playerItemStatus;

@end
