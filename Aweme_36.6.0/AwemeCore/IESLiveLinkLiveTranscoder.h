@interface IESLiveLinkLiveTranscoder : NSObject

- (id)mixType;
- (void)sendRtcEffectMsg:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(id)a3;
- (void)updateWithParam:(id)a0;
- (void)updateAudioEffectType:(id)a0;
- (void)setLeaderSingerUid:(id)a0;
- (void)setRealTimeChorusScene:(BOOL)a0;
- (void)setVideoChorus:(BOOL)a0;
- (void)setVideoChorusBaseStreamStartDelayMs:(double)a0;
- (void)enableChorusSpatialAudio:(long long)a0 spatialAudioDistanceParam:(int)a1;
- (void)disableChorusSpatialAudio;
- (void)updateSingerList:(id)a0;
- (void)updateEffectResourceLocalPath:(id)a0;
- (void)updateAuthInfo:(id)a0 FrameType:(long long)a1;
- (void)stopLiveTranscoding;
- (void)updateLiveTranscodingLayout:(BOOL)a0;
- (void)startLiveTranscoding;
- (void)setupWithParam:(id)a0;
- (void)updateStreamingOutputSize:(struct CGSize { double x0; double x1; })a0 withBitrate:(long long)a1 withFps:(long long)a2;
- (void)updateWaterMark:(id)a0;
- (void)setMultiChorusParam:(id)a0;
- (id)getMultiChorusParam;
- (int)startChorus:(unsigned long long)a0;
- (int)stopChorus:(unsigned long long)a0;

@end
