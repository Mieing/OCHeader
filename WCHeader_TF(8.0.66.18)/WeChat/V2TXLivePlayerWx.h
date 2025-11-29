@class NSString;
@protocol V2TXLivePlayerObserverWx;

@interface V2TXLivePlayerWx : V2TXLivePlayer <V2TXLivePlayerObserverWx> {
    long long _networkQuality;
    BOOL _enableMessage;
    id<V2TXLivePlayerObserverWx> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)log:(id)a0 isOnline:(BOOL)a1;

- (id)init;
- (void)setObserver:(id)a0;
- (long long)enableReceiveSeiMessage:(BOOL)a0 payloadType:(int)a1;
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
- (void)onPlayEvent:(long long)a0 param:(id)a1;
- (void)onPlayNetStatus:(id)a0;
- (void)onNetworkQuality:(long long)a0;
- (void)sendEventNotify:(long long)a0 param:(id)a1;
- (void)sendEventNotify:(long long)a0 msg:(id)a1;
- (void).cxx_destruct;

@end
