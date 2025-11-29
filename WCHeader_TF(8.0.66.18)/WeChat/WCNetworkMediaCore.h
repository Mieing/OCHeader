@class AVPlayerItem, NSString, AVURLAsset, AVPlayerLayer, WXAVPlayerView;
@protocol WCNetworkMediaCoreDelegate;

@interface WCNetworkMediaCore : MMObject <AVAssetResourceLoaderDelegate> {
    WCNetworkMediaCore *weakSelf;
    BOOL hasPlayed;
}

@property (retain, nonatomic) AVURLAsset *m_asset;
@property (retain, nonatomic) AVPlayerItem *m_item;
@property struct CGSize { double width; double height; } m_videoSize;
@property double m_duration;
@property (nonatomic) double m_cacheDuration;
@property (nonatomic) BOOL m_isNeedRestartMusic;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) WXAVPlayerView *playerView;
@property (readonly, nonatomic) AVPlayerLayer *layer;
@property (readonly, nonatomic) int state;
@property (weak, nonatomic) id<WCNetworkMediaCoreDelegate> delegate;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)prepareMediaWithMuted:(BOOL)a0;
- (double)cacheDuration;
- (double)duration;
- (struct CGSize { double x0; double x1; })videoSize;
- (double)currentPosition;
- (void)accurateSeekTo:(double)a0;
- (void)seekTo:(double)a0;
- (void)initPlayer;
- (void)internalPlay;
- (void)onPlaybackStalled:(id)a0;
- (void)onPlaybackEnd:(id)a0;
- (void)onPlaybackFailedToEnd:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)onPlayerItemStatusChange:(long long)a0;
- (void)onPlayerStatusChange:(long long)a0;
- (void)onCacheRangeChange:(id)a0;
- (void)updateState:(int)a0;
- (void).cxx_destruct;

@end
