@class NSLock, NSString, IESLiveLinkRTCChorusSpatialAudio, NSMutableDictionary, ByteRTCMixedStreamConfig, IESLiveLinkLiveRtc, IESLiveLinkRTCInteractTranscodeAVParams, IESLiveLinkMultiChorusMixedParam, IESLiveLinkRTCInteractVideoCompositingLayout;
@protocol ILiveTranscoderEventDelegate;

@interface IESLiveLinkRTCServerLiveTranscoder : IESLiveLinkLiveTranscoder

@property (weak, nonatomic) IESLiveLinkLiveRtc *liveRtc;
@property (weak, nonatomic) id<ILiveTranscoderEventDelegate> delegate;
@property (retain, nonatomic) ByteRTCMixedStreamConfig *mixedStreamConfig;
@property (retain, nonatomic) NSMutableDictionary *authInfo;
@property (retain, nonatomic) NSLock *authInfoLock;
@property (retain, nonatomic) NSLock *updateLayoutLock;
@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodeAVParams *rtcTranscodeAVParams;
@property (retain, nonatomic) IESLiveLinkRTCInteractVideoCompositingLayout *lastVideoCompositingLayout;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *publishUrl;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL isLiveTranscodingRunning;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSMutableDictionary *watermarksDict;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) unsigned long long singleChorusMode;
@property (retain, nonatomic) IESLiveLinkMultiChorusMixedParam *multiChorusParam;
@property (nonatomic) BOOL isChorusScene;
@property (retain, nonatomic) IESLiveLinkRTCChorusSpatialAudio *chorusSpatialAudio;
@property (nonatomic) BOOL enableExtraPublish;
@property (nonatomic) BOOL isVideoChorus;
@property (copy, nonatomic) NSString *audioEffectType;
@property (nonatomic) double baseStreamStartDelayMs;
@property (nonatomic) long long pushStreamMode;

- (id)mixType;
- (void)updateWithParam:(id)a0;
- (void)updateAudioEffectType:(id)a0;
- (void)setLeaderSingerUid:(id)a0;
- (void)setRealTimeChorusScene:(BOOL)a0;
- (void)setVideoChorus:(BOOL)a0;
- (void)setVideoChorusBaseStreamStartDelayMs:(double)a0;
- (void)enableChorusSpatialAudio:(long long)a0 spatialAudioDistanceParam:(int)a1;
- (void)disableChorusSpatialAudio;
- (void)updateSingerList:(id)a0;
- (void)updateAuthInfo:(id)a0 FrameType:(long long)a1;
- (void)stopLiveTranscoding;
- (void)updateLiveTranscodingLayout:(BOOL)a0;
- (void)startLiveTranscoding;
- (void)setupWithParam:(id)a0;
- (void)updateStreamingOutputSize:(struct CGSize { double x0; double x1; })a0 withBitrate:(long long)a1 withFps:(long long)a2;
- (void)updateWaterMark:(id)a0;
- (id)getMultiChorusParam;
- (int)startChorus:(unsigned long long)a0;
- (int)stopChorus:(unsigned long long)a0;
- (id)rtcEngineKit;
- (id)getMixedStreamConfig;
- (void)getLayout:(id)a0 withLiveLinkLayout:(id)a1;
- (void)updateAudioSpatiaInfo:(id)a0 lcLayout:(id)a1;
- (void)clearVideoCompositingLayout;
- (id)getPushTargetConfig;
- (void).cxx_destruct;

@end
