@class NSString, LiveCore;
@protocol IESLiveRoomService, IESLiveFullLinkMonitor;

@interface HTSLiveNormalStreamImp_Douyin : NSObject <IESLiveNormalPushStreaming>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) LiveCore *livecore;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL enableUpdateConfigCallAB;
@property (copy, nonatomic) id /* block */ startNormalStreamingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFakeAudioCaptureRunning;
- (void)setInputFrameCallback:(id /* block */)a0;
- (void)setEffectFrameCallback:(id /* block */)a0;
- (struct __CVBuffer { } *)getPixelBufferWithIsEffected:(BOOL)a0;
- (id)getJpegDataWithIsEffected:(BOOL)a0 compressionRatio:(double)a1;
- (void)updateStreamingConfiguration:(id)a0;
- (void)updateStreamingConfiguration:(id)a0 callback:(id /* block */)a1;
- (id)getAudioBytesSent;
- (id)getVideoBytesSent;
- (int)setAudioEncoderBitrate:(int)a0;
- (struct CGSize { double x0; double x1; })getCameraOutputSizeFromParams:(id)a0;
- (void)pushRestart:(id)a0;
- (void)enableSiti:(BOOL)a0;
- (void)enableVideoDenoise:(BOOL)a0;
- (void)setVideoDenoiseBitrateRatios:(double)a0 ge1080pRatio:(double)a1 lt1080pRatio:(double)a2;
- (void)setBFrameBitrateRatio:(double)a0;
- (void)startAudioCaptureWithReason:(id)a0 completion:(id /* block */)a1;
- (void)stopAudioCaptureWithReason:(id)a0;
- (void)audioCaptureInterrupted:(BOOL)a0 reason:(id)a1;
- (void)mute:(BOOL)a0 reason:(id)a1;
- (int)getAudioBitrate;
- (void)updateStreamingAudioBitrate:(long long)a0;
- (void)updateStreamingBitrate:(long long)a0 minBit:(long long)a1 maxBit:(long long)a2;
- (void)updateSiti:(BOOL)a0 fps:(BOOL)a1;
- (void)startAudioCaptureWithPrivacyCert:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)updateStreamingFrameRate:(long long)a0;
- (void)stopFakeAudioCaptureWithReason:(id)a0 completion:(id /* block */)a1;
- (void)startFakeAudioCaptureWithReason:(id)a0;
- (void)startNormalStreamingWithConfig:(id)a0;
- (void)audioCaptureInterrupted:(BOOL)a0 withPrivacyCert:(id)a1 reason:(id)a2;
- (void)updatePushURL:(id)a0;
- (void)updateStreamingOutputSize:(struct CGSize { double x0; double x1; })a0;
- (void)stopNormalStreaming;
- (void)reportAudioKeyApiCallWithEventKey:(id)a0 params:(id)a1 reason:(id)a2;
- (id)transferAudioConfig:(id)a0;
- (id)transferStreamConfig:(id)a0;
- (BOOL)isCurrentRoomAnchor;
- (void)handleABForSecurityModel;
- (long long)streamModeWith:(unsigned long long)a0;
- (void)stopAudioCaptureWithPrivacyCert:(id)a0 reason:(id)a1;
- (void)audioPlayerInterrupted:(BOOL)a0 reason:(id)a1;
- (void)pushAudioData:(id)a0 withCMTime:(long long)a1;
- (int)setAudioBitrate:(int)a0 Profile:(id)a1 EnableChangeProfile:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isStreaming;
- (void)setup;
- (id)initWithContentType:(unsigned long long)a0;
- (struct { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })outputConfig;

@end
