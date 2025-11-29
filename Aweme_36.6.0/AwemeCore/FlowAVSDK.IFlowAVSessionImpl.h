@class NSString;

@interface FlowAVSDK.IFlowAVSessionImpl : _TtCs12_SwiftObject <FlowAVSDK.FlowAVSession>

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *sessionId;
@property (nonatomic, readonly) long long sessionState;

- (void)startVideoCapture:(id)a0;
- (void)stopPlay;
- (void)addEngineListener:(id)a0;
- (void)removeEngineListener:(id)a0;
- (void)finishVideo;
- (void)startScreenShare;
- (void)finishScreenShare;
- (void)sendStreamWithFrame:(id)a0;
- (void)triggerBotWithCommand:(id)a0;
- (void)updateUIContextWithContext:(id)a0;
- (void)endASR;
- (void)pauseWithIsSuspend:(BOOL)a0;
- (void)resumePlay;
- (void)duckTo:(float)a0;
- (void)startAudioRecorder:(id)a0 completion:(id /* block */)a1;
- (void)setMediaType:(long long)a0 recorder:(id)a1 recordFormat:(id)a2 player:(id)a3 playFormat:(id)a4 cacheCount:(long long)a5;
- (void)setBurstEnable:(BOOL)a0;
- (void)setAECType:(long long)a0 config:(id)a1;
- (void)setDumpEnable:(BOOL)a0;
- (void)setLoudnessStrategy:(id)a0;
- (void)setVolumeEnable:(BOOL)a0;
- (void)setAudioSessionConfig:(id)a0;
- (void)setVideoRecorderConfig:(id)a0;
- (void)setEnableFrameSelector:(BOOL)a0;
- (void)setScreenGroupID:(id)a0;
- (void)startScreenCapture:(id)a0 bundleID:(id)a1;
- (void)registerAudioProcessor:(id)a0;
- (void)unmute;
- (void)removeListener:(id)a0;
- (void)mute;
- (void)start:(id)a0;
- (void)interrupt;
- (void)play;
- (void)pause;
- (void)disconnect;
- (void)stop;
- (void)addListener:(id)a0;
- (void)resume;
- (void)stopVideoCapture;
- (void)sendCommand:(id)a0;
- (void)stopScreenCapture;
- (void)startVideo;
- (void)switchCamera:(BOOL)a0;

@end
