@class HTSGLContext, NSString, VELensConfig;

@interface VELensOnekeyEnhanceAlgorithm : IESMMObject

@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (nonatomic) struct IOneKeyGraphInterface { void /* function */ **x0; } *oneKeyPtr;
@property (retain, nonatomic) VELensConfig *config;
@property (readonly, nonatomic) HTSGLContext *context;
@property (nonatomic) float minISO;
@property (nonatomic) float maxISO;
@property (nonatomic) BOOL initLensHandleSuccessful;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *curPixelBuffer;
@property (nonatomic) BOOL shouldPost;
@property (nonatomic) int lastDetectResult;
@property (nonatomic) BOOL mDisableHdr;
@property (nonatomic) BOOL mDisableDenoise;
@property (nonatomic) BOOL mDisableAsf;
@property (nonatomic) BOOL mOneKeyRecordHdrV2;
@property (nonatomic) BOOL mAsyncProcess;
@property (nonatomic) BOOL mDisableDayScene;
@property (nonatomic) BOOL mDisableNightScene;
@property (retain, nonatomic) NSString *mAlgParams;
@property (nonatomic) BOOL mEnableDetectAlgo;
@property (nonatomic) BOOL isFirstFrame;
@property (nonatomic) BOOL isLiveCore;

- (BOOL)createLensAlgorithmHandle;
- (void)releaseAllEngine:(BOOL)a0;
- (void)p_storeBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)getEnableAsf;
- (struct CGSize { double x0; double x1; })getAlgorithmCurrentFrameSize;
- (void)resetOnekeyConfig:(id)a0;
- (void)setLensDectMinISO:(float)a0 maxISO:(float)a1;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)a0 ISO:(float)a1 faceDectResultArray:(id)a2;
- (void)setLiveCoreScenes:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
