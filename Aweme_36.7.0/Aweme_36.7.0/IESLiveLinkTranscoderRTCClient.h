@class NSLock, NSString, IESLiveLinkTranscoderVideoMixParam, NSMutableDictionary, IESLiveLinkRTCEngineManager, IESLiveLinkLiveVideoMixParam, ByteRTCMixedStreamConfig, IESLiveLinkRTCInteractVideoCompositingLayout;
@protocol IESLiveLinkTranscoderDataDelegate, IESLiveLinkTranscoderEventDelegate;

@interface IESLiveLinkTranscoderRTCClient : NSObject <ByteRTCClientMixedStreamDelegate, IESLiveLinkTranscoder>

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (weak, nonatomic) id<IESLiveLinkTranscoderEventDelegate> delegate;
@property (weak, nonatomic) id<IESLiveLinkTranscoderDataDelegate> avDataSink;
@property (retain, nonatomic) ByteRTCMixedStreamConfig *mixedStreamConfig;
@property (retain, nonatomic) NSMutableDictionary *authInfo;
@property (retain, nonatomic) IESLiveLinkLiveVideoMixParam *rtcTranscodeAVParams;
@property (retain, nonatomic) IESLiveLinkRTCInteractVideoCompositingLayout *lastVideoCompositingLayout;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *publishUrl;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isLiveTranscodingRunning;
@property (retain, nonatomic) NSMutableDictionary *watermarksDict;
@property (retain, nonatomic) NSLock *updateLayoutLock;
@property (retain, nonatomic) IESLiveLinkTranscoderVideoMixParam *transcodeParams;
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
- (id)getClientMixedStreamConfig;
- (void)getLayout:(id)a0 withLiveLinkLayout:(id)a1;
- (void)updateAudioSpatiaInfo:(id)a0 lcLayout:(id)a1;
- (void)clearVideoCompositingLayout;
- (id)initWithEventDelegate:(id)a0 dataDelegate:(id)a1;
- (id)transcoderInfo;
- (void)onCacheSyncVideo:(id)a0 withDataFrame:(id)a1 withUids:(id)a2 taskId:(id)a3;
- (void)onClientMixedStreamEvent:(unsigned long long)a0 withTaskInfo:(id)a1 withMixedType:(unsigned long long)a2 withErrorCode:(long long)a3;
- (void)onMixedAudioFrame:(id)a0 withTimestamp:(long long)a1 withTaskId:(id)a2;
- (void)onMixedDataFrame:(id)a0 withTaskId:(id)a1;
- (void)onMixedVideoFrame:(id)a0 withTaskId:(id)a1;
- (void).cxx_destruct;
- (id)taskID;

@end
