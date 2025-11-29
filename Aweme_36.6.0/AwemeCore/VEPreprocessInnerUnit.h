@class NSMutableDictionary, HTSGLFilterGroup, HTSRawDataOutputRender, VEAmazingEffectFilterConfig, IESMMEffectConfig, HTSGLFilterInput, HTSGLTC21RedpackageFilter, VEHdrEffectOptFilter, HTSGLResizeRotateFilter, VEAmazingEffectFilter, HTSGLCropFilter, HTSGLContext, HTSGLFilterCustomBlend, VEGLCicleFilter;
@protocol IESMMEffectGroupProtocol;

@interface VEPreprocessInnerUnit : NSObject

@property (retain, nonatomic) IESMMEffectConfig *effectConfig;
@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) HTSGLFilterInput *inputFilter;
@property (retain, nonatomic) HTSGLCropFilter *cropBeforeEffectFilter;
@property (retain, nonatomic) HTSGLFilterGroup<IESMMEffectGroupProtocol> *effectFilter;
@property (retain, nonatomic) HTSGLResizeRotateFilter *preRotateFilter;
@property (retain, nonatomic) VEAmazingEffectFilter *amazingFilter;
@property (retain, nonatomic) HTSGLResizeRotateFilter *postRotateFilter;
@property (retain, nonatomic) HTSGLCropFilter *cropAfterEffectFilter;
@property (retain, nonatomic) VEGLCicleFilter *cicleFilter;
@property (retain, nonatomic) HTSGLTC21RedpackageFilter *redPackageFilter;
@property (retain, nonatomic) HTSGLFilterCustomBlend *blendFilter;
@property (retain, nonatomic) HTSRawDataOutputRender *outputRender;
@property (retain, nonatomic) HTSRawDataOutputRender *writeOutputRender;
@property (retain, nonatomic) NSMutableDictionary *filtersUpStream;
@property (nonatomic) BOOL abHdrEffectOptimization;
@property (retain, nonatomic) VEHdrEffectOptFilter *hdrEffectOptFilter;
@property (nonatomic) BOOL isFilterChainInited;
@property (nonatomic) BOOL enableMultiInput;
@property (nonatomic, getter=isBeginOfStream) BOOL beginOfStream;
@property (nonatomic) BOOL isDisableEffect;
@property (nonatomic) BOOL enable10bitRtRender;
@property (nonatomic) BOOL enablePreviewEncodeSplit;
@property (readonly, nonatomic) struct __CVBuffer { } *processedPixbuf;
@property (nonatomic) unsigned long long originVideoRotation;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) struct CGSize { double width; double height; } effectRenderSize;
@property (nonatomic) unsigned long long cropType;
@property (nonatomic) BOOL needRoundEffect;
@property (nonatomic) BOOL needProcessedBufferCallback;
@property (nonatomic) BOOL enableTC21RedpackageRecord;
@property (nonatomic) BOOL enableAmazingFilter;
@property (nonatomic) unsigned long long rotationMode;
@property (retain, nonatomic) VEAmazingEffectFilterConfig *amazingFilterConfig;

- (void)setNeedBlendSecond:(BOOL)a0 pixelbuffer:(struct __CVBuffer { } *)a1 mix:(float)a2;
- (id)initWithEffectConfig:(id)a0 context:(id)a1;
- (void)insertFilter:(id)a0 afterFilter:(id)a1;
- (void)removeFilterFromChain:(id)a0;
- (void)p_updateHdrEffectOptFilter:(id)a0;
- (id)initWithOutEffect;
- (id)initWithOutEffect:(id)a0;
- (void)buildFilterChain;
- (void)updateCropType:(unsigned long long)a0 andOutputSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)getAndResetBeginOfStreamFlag;
- (void)cleanFrameBufferReference;
- (void)setDisableEffect:(BOOL)a0;
- (void)setEffectRenderCropFillMode:(long long)a0;
- (void)insertEncodeNodeWithPos:(unsigned long long)a0;
- (BOOL)processSampleData:(id)a0 downStreams:(id)a1;
- (void).cxx_destruct;

@end
