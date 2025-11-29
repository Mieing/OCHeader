@class LSGLPictureInput, LSGLContext, NSString, NSMutableDictionary, LSGLPictureMixer, LSGLEffectFilter, LSGLScreenRender, LSGLFramebuffer;
@protocol RequireLayoutUpdate;

@interface LiveCoreRenderFilter : NSObject <LSGLInput> {
    NSMutableDictionary *descriptions;
    int outputWidth;
    int outputHeight;
    int layer_index;
}

@property (nonatomic) BOOL enableRenderFilter;
@property (retain, nonatomic) LSGLFramebuffer *frameBuffer;
@property (retain, nonatomic) LSGLEffectFilter *filter;
@property (retain, nonatomic) LSGLPictureMixer *mixer;
@property (weak, nonatomic) LSGLScreenRender *local_preview;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL update_new_layout;
@property (retain, nonatomic) id<RequireLayoutUpdate> updater;
@property (nonatomic) BOOL renderOnSingleView;
@property (nonatomic) BOOL useExternalEffect;
@property (nonatomic) BOOL skipMix;
@property (retain, nonatomic) LSGLContext *context;
@property (retain, nonatomic) LSGLPictureInput *gl_input;
@property (nonatomic) unsigned int fmt_type;
@property (copy, nonatomic) id /* block */ frameCallback;
@property (nonatomic) BOOL singleInputMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)reportToServer:(id)a0;
- (void)setMasterLayer:(int)a0;
- (int)registerVideoFrameRender:(id)a0 preview:(id)a1 defaultRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)initLiveCoreRenderFilterInner:(id)a0;
- (void)disposeLiveCoreRenderFilterInner;
- (void)requireNewLayoutUpdate:(id)a0;
- (void)checkForUpdateLayout;
- (id)initWithLocalPreview:(id)a0;
- (void)setMixOutput:(int)a0 height:(int)a1;
- (void)initLiveCoreRenderFilter:(id)a0;
- (void)disposeLiveCoreRenderFilter;
- (id)getLiveEffectProcessorInterface;
- (int)registerVideoFrameRender:(id)a0 preview:(id)a1 defaultRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 newLayoutUpdate:(id)a3;
- (void)unRegisterVideoFrameRender:(id)a0;
- (BOOL)processVideoFrame:(id)a0 buffer:(id)a1 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)initSingleInputStream:(unsigned int)a0;
- (BOOL)pushVideoFrameInSingleInputMode:(struct __CVBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)externalRenderFilterErrorCount;
- (BOOL)isEnable;
- (void).cxx_destruct;
- (id)name;
- (BOOL)enabled;
- (void)setEnable:(BOOL)a0;
- (unsigned long long)getStatus;
- (void)startProcessing;

@end
