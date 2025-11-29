@class UIView, HTSEventContext, NSNumber, IESLiveEffectNewLink, IESLiveRenderFilterNewLink, NSString, NSDictionary, IESLiveGuideVRManager, IESLiveEffectVideoStreamServiceImp, IESLiveEffectProcessServiceImp, IESLiveEffectAudioStreamProcessImp, LiveStreamCapture;
@protocol IESLiveRecoder;

@interface HTSLiveEffectProcessLifyCycleImp_Douyin : NSObject <IESLiveStreamCaptureProvider, IESLiveGuideVRRouter, IESLiveEffectProcessLifyCycle>

@property (retain, nonatomic) LiveStreamCapture *liveCapture;
@property (retain, nonatomic) IESLiveEffectVideoStreamServiceImp *effectVideoProcesser;
@property (retain, nonatomic) IESLiveEffectProcessServiceImp *effectService;
@property (retain, nonatomic) IESLiveEffectAudioStreamProcessImp *audioProcesser;
@property (readonly, weak, nonatomic) id<IESLiveRecoder> recoder;
@property (nonatomic) BOOL repushFrameEnable;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) long long reFrameCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } filterPTS;
@property (retain, nonatomic) IESLiveGuideVRManager *VRManager;
@property (retain, nonatomic) NSDictionary *fishEyeInitParams;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSNumber *liveCoreLogLevel;
@property (retain, nonatomic) IESLiveEffectNewLink *effectNewLink;
@property (retain, nonatomic) IESLiveRenderFilterNewLink *renderFilterNewLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (id)audioDrivePictureEffect_destroyHandler;
- (void)setVideoProcessedBypassCallback:(id /* block */)a0;
- (void)setBypassOutputSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1 enable:(BOOL)a2;
- (id)liveCoreStreamCapture;
- (id)audioDrivePictureEffect_prepareHandlerWithUseInMic:(BOOL)a0 useInMusic:(BOOL)a1;
- (void)loadVideoEffectProviderWith:(id)a0;
- (BOOL)hasLoadVideoEffectProvider;
- (void)cleanupVideoEffectProvider;
- (void)bindRecoderWithFirstRenderCallback:(id /* block */)a0;
- (void)enableRepushFrame:(BOOL)a0;
- (void)dropFramesBeforePTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setFisheyeParams:(id)a0 previewView:(id)a1 trackContext:(id)a2;
- (void)updateLiveCoreLogLevel:(long long)a0;
- (void)resetLiveCoreLogLevel;
- (void)setExternalRenderFilterLink:(id)a0;
- (void)openGuideVRLiveWithStatus:(BOOL)a0;
- (id)transferLiveStreamConfig:(id)a0;
- (void)configLiveCoreLogLevel;
- (void)cleanupVRManager;
- (void)pushVideoBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 extraInfo:(id)a2;
- (void).cxx_destruct;

@end
