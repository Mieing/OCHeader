@interface FlutterAppPlugin.V2TXLivePlayerPlugin : NSObject <V2TXLivePlayerObserver> {
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ pluginManager;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ identifier;
}

- (void)onError:(id)a0 code:(long long)a1 message:(id)a2 extraInfo:(id)a3;
- (void)onWarning:(id)a0 code:(long long)a1 message:(id)a2 extraInfo:(id)a3;
- (void)onVideoResolutionChanged:(id)a0 width:(long long)a1 height:(long long)a2;
- (void)onConnected:(id)a0 extraInfo:(id)a1;
- (void)onVideoPlaying:(id)a0 firstPlay:(BOOL)a1 extraInfo:(id)a2;
- (void)onAudioPlaying:(id)a0 firstPlay:(BOOL)a1 extraInfo:(id)a2;
- (void)onVideoLoading:(id)a0 extraInfo:(id)a1;
- (void)onAudioLoading:(id)a0 extraInfo:(id)a1;
- (void)onPlayoutVolumeUpdate:(id)a0 volume:(long long)a1;
- (void)onStatisticsUpdate:(id)a0 statistics:(id)a1;
- (void)onSnapshotComplete:(id)a0 image:(id)a1;
- (void)onRenderVideoFrame:(id)a0 frame:(id)a1;
- (void)onReceiveSeiMessage:(id)a0 payloadType:(int)a1 data:(id)a2;
- (void)onPictureInPictureStateUpdate:(id)a0 state:(long long)a1 message:(id)a2 extraInfo:(id)a3;
- (void)setRenderViewWithCall:(id)a0 result:(id /* block */)a1;
- (void)setRenderRotationWithCall:(id)a0 result:(id /* block */)a1;
- (void)setRenderFillModeWithCall:(id)a0 result:(id /* block */)a1;
- (void)startLivePlayWithCall:(id)a0 result:(id /* block */)a1;
- (void)stopPlayWithCall:(id)a0 result:(id /* block */)a1;
- (void)isPlayingWithCall:(id)a0 result:(id /* block */)a1;
- (void)pauseAudioWithCall:(id)a0 result:(id /* block */)a1;
- (void)resumeAudioWithCall:(id)a0 result:(id /* block */)a1;
- (void)pauseVideoWithCall:(id)a0 result:(id /* block */)a1;
- (void)resumeVideoWithCall:(id)a0 result:(id /* block */)a1;
- (void)setPlayoutVolumeWithCall:(id)a0 result:(id /* block */)a1;
- (void)setCacheParamsWithCall:(id)a0 result:(id /* block */)a1;
- (void)enableVolumeEvaluationWithCall:(id)a0 result:(id /* block */)a1;
- (void)snapshotWithCall:(id)a0 result:(id /* block */)a1;
- (void)enableObserveVideoFrameWithCall:(id)a0 result:(id /* block */)a1;
- (void)enableReceiveSeiMessageWithCall:(id)a0 result:(id /* block */)a1;
- (void)showDebugViewWithCall:(id)a0 result:(id /* block */)a1;
- (void)setPropertyWithCall:(id)a0 result:(id /* block */)a1;
- (void)enablePictureInPictureWithCall:(id)a0 result:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
