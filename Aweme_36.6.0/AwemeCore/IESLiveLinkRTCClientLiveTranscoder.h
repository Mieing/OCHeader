@class NSLock, NSString, NSMutableDictionary, ByteRTCMixedStreamConfig, IESLiveLinkLiveRtc, IESLiveLinkRTCInteractTranscodeAVParams, IESLiveLinkMultiChorusMixedParam, IESLiveLinkRTCInteractVideoCompositingLayout;
@protocol ILiveTranscoderEventDelegate, ILiveTranscoderAVDataSink;

@interface IESLiveLinkRTCClientLiveTranscoder : IESLiveLinkLiveTranscoder <ByteRTCClientMixedStreamDelegate>

@property (weak, nonatomic) IESLiveLinkLiveRtc *liveRtc;
@property (weak, nonatomic) id<ILiveTranscoderEventDelegate> delegate;
@property (weak, nonatomic) id<ILiveTranscoderAVDataSink> avDataSink;
@property (retain, nonatomic) ByteRTCMixedStreamConfig *mixedStreamConfig;
@property (retain, nonatomic) NSMutableDictionary *authInfo;
@property (retain, nonatomic) IESLiveLinkRTCInteractTranscodeAVParams *rtcTranscodeAVParams;
@property (retain, nonatomic) IESLiveLinkRTCInteractVideoCompositingLayout *lastVideoCompositingLayout;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSString *publishUrl;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isLiveTranscodingRunning;
@property (nonatomic) BOOL isByteAudioModeEnable;
@property (retain, nonatomic) NSMutableDictionary *watermarksDict;
@property (retain, nonatomic) NSLock *updateLayoutLock;
@property (nonatomic) unsigned long long singleChorusMode;
@property (retain, nonatomic) IESLiveLinkMultiChorusMixedParam *multiChorusParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mixType;
- (void)sendRtcEffectMsg:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(id)a3;
- (void)updateWithParam:(id)a0;
- (void)updateAudioEffectType:(id)a0;
- (void)updateEffectResourceLocalPath:(id)a0;
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
- (id)getClientMixedStreamConfig;
- (void)getLayout:(id)a0 withLiveLinkLayout:(id)a1;
- (void)updateAudioSpatiaInfo:(id)a0 lcLayout:(id)a1;
- (void)clearVideoCompositingLayout;
- (void)updateMultiChorusParam:(id)a0;
- (void)onCacheSyncVideo:(id)a0 withDataFrame:(id)a1 withUids:(id)a2 taskId:(id)a3;
- (void)onClientMixedStreamEvent:(unsigned long long)a0 withTaskInfo:(id)a1 withMixedType:(unsigned long long)a2 withErrorCode:(long long)a3;
- (void)onMixedAudioFrame:(id)a0 withTimestamp:(long long)a1 withTaskId:(id)a2;
- (void)onMixedDataFrame:(id)a0 withTaskId:(id)a1;
- (void)onMixedVideoFrame:(id)a0 withTaskId:(id)a1;
- (void).cxx_destruct;

@end
