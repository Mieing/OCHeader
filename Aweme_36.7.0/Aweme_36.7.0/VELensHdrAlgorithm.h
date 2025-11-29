@class HTSGLContext, NSString;

@interface VELensHdrAlgorithm : NSObject

@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) BOOL mIsClearCache;
@property (nonatomic) void *mRenderDevice;
@property (nonatomic) struct CGSize { double width; double height; } fristVideoSize;
@property (nonatomic) BOOL mIsLensInited;
@property (nonatomic) BOOL mIsLensCreated;
@property (nonatomic) BOOL enableLensHdr2Sdr;

- (BOOL)initEngine;
- (void)releaseEngine;
- (BOOL)renderLensHdr:(id)a0 outputFramebuffer:(id)a1;
- (BOOL)createLensEngine;
- (BOOL)initEngineByParams:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
