@class NSString, V2TXLivePlayerJSConfig, V2TXLivePlayerWx;
@protocol V2TXLivePlayerJSAdapterDelegate;

@interface V2TXLivePlayerJSAdapter : NSObject <V2TXLivePlayerObserverWx> {
    V2TXLivePlayerWx *_player;
    V2TXLivePlayerJSConfig *_appliedConfig;
    BOOL _needCompress;
    id /* block */ _snapshotCompletion;
}

@property (retain, nonatomic) NSString *playerId;
@property (weak, nonatomic) id<V2TXLivePlayerJSAdapterDelegate> delegate;
@property (readonly, nonatomic) V2TXLivePlayerJSConfig *config;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreviewView:(id)a0 delegate:(id)a1;
- (void)updateLivePlayerWithConfigs:(id)a0;
- (void)updateLivePlayerWithConfigs:(id)a0 force:(BOOL)a1;
- (BOOL)operateLivePlayerWithType:(id)a0 params:(id)a1;
- (BOOL)isMuted;
- (void)setPreview:(id)a0;
- (void)setAudioRoute:(long long)a0;
- (void)takePhoto:(BOOL)a0 completion:(id /* block */)a1;
- (void)onlineLog:(id)a0;
- (void)onlineLog:(id)a0 online:(BOOL)a1;
- (void)restartAudioDevice;
- (id)parseConfigs:(id)a0;
- (void)applyConfig:(id)a0 force:(BOOL)a1;
- (long long)startPlay;
- (long long)stopPlay;
- (void)pausePlay;
- (void)resumePlay;
- (void)muteAudio:(BOOL)a0;
- (void)muteVideo:(BOOL)a0;
- (id)getPlayerIdWithUrl:(id)a0;
- (void)onSnapshotComplete:(id)a0 image:(id)a1;
- (void)onPlayoutVolumeUpdate:(id)a0 volume:(long long)a1;
- (void)onPlayEvent:(long long)a0 param:(id)a1;
- (void)onPlayNetStatus:(id)a0;
- (void)sendEventNotify:(long long)a0 param:(id)a1;
- (void)sendEventNotify:(long long)a0 msg:(id)a1;
- (void)apiOnlineLog:(id)a0 online:(BOOL)a1;
- (void).cxx_destruct;

@end
