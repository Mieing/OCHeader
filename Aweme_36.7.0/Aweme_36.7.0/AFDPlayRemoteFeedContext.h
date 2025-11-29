@interface AFDPlayRemoteFeedContext : NSObject

@property (nonatomic) BOOL needReusePlayer;
@property (nonatomic) float initialVolume;
@property (readonly, nonatomic) long long pureMode;
@property (readonly, nonatomic) BOOL isHost;
@property (readonly, nonatomic) BOOL enableMultiSpeed;
@property (readonly, nonatomic) BOOL playerUseAudioMix;

- (void)updatePureMode:(long long)a0;
- (void)updateEnableMultiSpeed:(BOOL)a0;
- (void)updatePlayerUseAudioMix:(BOOL)a0;
- (void)updateInitialVolume:(float)a0;
- (void)updateIsHost:(BOOL)a0;

@end
