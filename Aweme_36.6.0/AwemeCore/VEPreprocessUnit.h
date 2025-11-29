@class HTSGLResizeRotateFilter, VEAmazingEffectFilterConfig, NSString, HTSGLTC21RedpackageFilter, VEAmazingEffectFilter, VEPreprocessInnerUnit, HTSGLFilterCustomBlend, VEFastCropUnit, HTSGLContext, HTSGLFilterGroup;
@protocol IESMMEffectGroupProtocol;

@interface VEPreprocessUnit : VEUnitObject <VEProcessSampleDelegate>

@property (retain, nonatomic) VEFastCropUnit *fastCropUnit;
@property (nonatomic) BOOL isExtProcessUnitExist;
@property (retain, nonatomic) HTSGLContext *mainContext;
@property (retain, nonatomic) HTSGLContext *shareContext;
@property (readonly, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectFilter;
@property (readonly, nonatomic) HTSGLResizeRotateFilter *preRotateFilter;
@property (readonly, nonatomic) VEAmazingEffectFilter *amazingFilter;
@property (readonly, nonatomic) HTSGLResizeRotateFilter *postRotateFilter;
@property (readonly, nonatomic) HTSGLTC21RedpackageFilter *redPackageFilter;
@property (readonly, nonatomic) HTSGLFilterCustomBlend *blendFilter;
@property (readonly, nonatomic) struct __CVBuffer { } *processedPixbuf;
@property (nonatomic) BOOL isSyncEffectLoadReady;
@property (nonatomic) unsigned long long originVideoRotation;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) struct CGSize { double width; double height; } effectRenderSize;
@property (nonatomic) unsigned long long cropType;
@property (nonatomic) BOOL forceNoCrop;
@property (nonatomic) BOOL needRoundEffect;
@property (nonatomic) BOOL needProcessedBufferCallback;
@property (nonatomic) BOOL enableTC21RedpackageRecord;
@property (nonatomic) BOOL enableAmazingFilter;
@property (nonatomic) unsigned long long rotationMode;
@property (retain, nonatomic) VEAmazingEffectFilterConfig *amazingFilterConfig;
@property (retain, nonatomic) VEPreprocessInnerUnit *mainPreprocessInnerUnit;
@property (retain, nonatomic) VEPreprocessInnerUnit *extPreprocessInnerUnit;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadEffectAlgorithm;
- (void)setNeedBlendSecond:(BOOL)a0 pixelbuffer:(struct __CVBuffer { } *)a1 mix:(float)a2;
- (BOOL)processSampleData:(id)a0;
- (void)buildFilterChain;
- (void)updateCropType:(unsigned long long)a0 andOutputSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)getAndResetBeginOfStreamFlag;
- (void)cleanFrameBufferReference;
- (void)setDisableEffect:(BOOL)a0;
- (void)setEffectRenderCropFillMode:(long long)a0;
- (void)insertEncodeNodeWithPos:(unsigned long long)a0;
- (void)processSampleDataWithNoEffect:(id)a0;
- (id)initWithEffectConfig:(id)a0 isMultiCamMode:(BOOL)a1 renderCtxts:(id)a2;
- (id)initWithOutEffect:(BOOL)a0 renderCtxts:(id)a1;
- (void).cxx_destruct;

@end
