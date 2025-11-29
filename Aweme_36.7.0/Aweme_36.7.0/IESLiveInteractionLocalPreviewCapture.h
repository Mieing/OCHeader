@class LiveStreamCapture, NSArray, NSHashTable, IESLiveInteractionDarkFrameStream, UIView, IESLiveEffectNewLink;
@protocol IESLiveSettings, IESLiveEffectModuleBeautyForAudienceService, IESLiveRecoder;

@interface IESLiveInteractionLocalPreviewCapture : NSObject

@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) id<IESLiveRecoder> camera;
@property (retain, nonatomic) IESLiveInteractionDarkFrameStream *darkFrameStream;
@property (retain, nonatomic) LiveStreamCapture *capture;
@property (nonatomic) BOOL isUsedBeautyEffect;
@property (copy, nonatomic) NSArray *beautyItems;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (nonatomic) long long curInputType;
@property (retain, nonatomic) UIView *previewView;
@property (nonatomic) BOOL isPreviewing;
@property (retain, nonatomic) id<IESLiveSettings> settings;
@property (retain, nonatomic) id<IESLiveEffectModuleBeautyForAudienceService> beautyEffectConfig;
@property (copy, nonatomic) id /* block */ getPixelBufferCallback;
@property (retain, nonatomic) IESLiveEffectNewLink *effectNewLink;

- (id)initWithDIContext:(id)a0;
- (id)getCurrentComposerNodes;
- (void)removeComposerNodes:(id)a0;
- (struct __CVBuffer { } *)getPixelBufferWithIsEffected:(BOOL)a0;
- (void)switchCameraSource;
- (void)initializeWithPreviewSize:(struct CGSize { double x0; double x1; })a0 fps:(long long)a1;
- (id)p_liveStreamConfigMapped:(id)a0;
- (void)p_setupEffectEnvironment;
- (void)p_loadBeautyResource;
- (void)p_useBeautyEffectWithBeautyItems:(id)a0;
- (void)initializeWithPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)startPreviewWithInput:(long long)a0 firstFrameCallback:(id /* block */)a1;
- (void)applyComposerNodes:(id)a0 appendOrNot:(BOOL)a1;
- (void)sendEffectMessage:(unsigned long long)a0 param1:(unsigned long long)a1 param2:(unsigned long long)a2 data:(id)a3;
- (void)asyncGetPixelBufferWithIsEffected:(BOOL)a0 completion:(id /* block */)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)stopPreview;

@end
