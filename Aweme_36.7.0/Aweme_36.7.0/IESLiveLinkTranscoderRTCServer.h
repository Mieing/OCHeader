@class NSLock, NSString, IESLiveLinkTranscoderVideoMixParam, NSMutableDictionary, ByteRTCMixedStreamConfig, IESLiveLinkLiveVideoMixParam, IESLiveLinkRTCEngineManager, IESLiveLinkRTCInteractVideoCompositingLayout;
@protocol IESLiveLinkTranscoderEventDelegate;

@interface IESLiveLinkTranscoderRTCServer : NSObject <ByteRTCEngineDelegate, IESLiveLinkTranscoder>

@property (weak, nonatomic) id<IESLiveLinkTranscoderEventDelegate> delegate;
@property (retain, nonatomic) ByteRTCMixedStreamConfig *mixedStreamConfig;
@property (retain, nonatomic) NSMutableDictionary *authInfo;
@property (retain, nonatomic) NSLock *authInfoLock;
@property (retain, nonatomic) NSLock *updateLayoutLock;
@property (retain, nonatomic) IESLiveLinkLiveVideoMixParam *rtcTranscodeAVParams;
@property (retain, nonatomic) IESLiveLinkRTCInteractVideoCompositingLayout *lastVideoCompositingLayout;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *publishUrl;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL isLiveTranscodingRunning;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSMutableDictionary *watermarksDict;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL enableExtraPublish;
@property (retain, nonatomic) IESLiveLinkTranscoderVideoMixParam *transcodeParams;
@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (copy, nonatomic) NSString *audioEffectType;
@property (nonatomic) long long pushStreamMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mixType;
- (void)sendRtcEffectMsg:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(id)a3;
- (void)updateWithParam:(id)a0;
- (void)updateAudioEffectType:(id)a0;
- (long long)getMixType;
- (void)updateEffectResourceLocalPath:(id)a0;
- (void)updateAuthInfo:(id)a0 FrameType:(long long)a1;
- (id)getTranscodeParams;
- (void)stopLiveTranscoding;
- (void)updateLiveTranscodingLayout:(BOOL)a0;
- (void)startLiveTranscoding;
- (void)setupWithParam:(id)a0;
- (void)updateStreamingOutputSize:(struct CGSize { double x0; double x1; })a0 withBitrate:(long long)a1 withFps:(long long)a2;
- (void)updateWaterMark:(id)a0;
- (id)rtcEngineKit;
- (id)getMixedStreamConfig;
- (void)getLayout:(id)a0 withLiveLinkLayout:(id)a1;
- (void)updateAudioSpatiaInfo:(id)a0 lcLayout:(id)a1;
- (void)clearVideoCompositingLayout;
- (id)getPushTargetConfig;
- (id)initWithEventDelegate:(id)a0;
- (id)transcoderInfo;
- (void)rtcEngine:(id)a0 onMixedStreamEvent:(unsigned long long)a1 withMixedStreamInfo:(id)a2 withErrorCode:(long long)a3;
- (void).cxx_destruct;
- (id)taskID;

@end
