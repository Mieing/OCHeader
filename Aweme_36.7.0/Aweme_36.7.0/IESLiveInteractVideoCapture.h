@class NSArray, NSTimer, NSString, IESLiveInteractionDarkFrameStream, UIView;
@protocol IESLiveEffectModuleBeautyForAudienceService, IESLiveVideoEffectProcessing, IESLiveEffectProcessService, IESLiveRecoder, IESLiveInteractVideoCaptureSEIParserProtocol;

@interface IESLiveInteractVideoCapture : NSObject <IESLiveInteractVideoCaptureProvider>

@property (retain, nonatomic) id<IESLiveRecoder> camera;
@property (retain, nonatomic) IESLiveInteractionDarkFrameStream *darkFrameStream;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (retain, nonatomic) UIView *previewView;
@property (nonatomic) BOOL isRendering;
@property (nonatomic) BOOL isCapturing;
@property (nonatomic) BOOL isUsedBeautyEffect;
@property (retain, nonatomic) id<IESLiveEffectModuleBeautyForAudienceService> beautyEffectConfig;
@property (copy, nonatomic) NSArray *beautyItems;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) id<IESLiveInteractVideoCaptureSEIParserProtocol> pingingResult;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoProcesser;
@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcesser;
@property (nonatomic) long long currentCaptureInputType;
@property (nonatomic) BOOL isDarkFrameMode;
@property (readonly, nonatomic) BOOL isDarkFrameStreamPushing;
@property (readonly, nonatomic) BOOL isPreviewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)getCurrentComposerNodes;
- (void)sendMessage:(unsigned long long)a0 param1:(unsigned long long)a1 param2:(unsigned long long)a2 userInfo:(id)a3;
- (void)switchCameraSource;
- (void)setupEffectEnvironment;
- (void)useBeautyEffectWithBeautyItems:(id)a0;
- (void)loadBeautyResource;
- (BOOL)enableAudienceMediaCaptureOpt;
- (id)resetCameraPreviewView:(id)a0;
- (void)changeCaptureInputType:(long long)a0;
- (void)applyEffectNodes:(id)a0 enableFakeFace:(BOOL)a1;
- (void)startVideoCapture:(id)a0 firstFrameRenderCallback:(id /* block */)a1;
- (void)startVideoCapture:(id)a0 firstFrameRenderCallback:(id /* block */)a1 inputType:(long long)a2;
- (void)resetCustomStream:(id)a0;
- (void)startCapturePinging:(id /* block */)a0;
- (void)stopCapturePinging;
- (void)cleanupCamera;
- (void)pingCurrentIsPreivewing:(BOOL)a0;
- (id)currentVideoSeiKey;
- (void)loadPreviewWithPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadCameraWithPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)removeEffectNodes:(id)a0;
- (void).cxx_destruct;
- (long long)currentPosition;
- (void)dealloc;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end
