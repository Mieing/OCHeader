@class NSMutableDictionary, VEAmazingEffectConfig, VEBitsRTTransUtil, HTSGLContext, NSString;

@interface VEAmazingEffectRenderer : NSObject <IVEAmazingEffectProtocol>

@property (nonatomic) void *engine;
@property (retain, nonatomic) NSMutableDictionary *mFeatures;
@property (retain, nonatomic) VEAmazingEffectConfig *config;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) int renderEffectColorSpace;
@property (nonatomic) BOOL enableFeatureEngineReuseOpt;
@property (readonly, nonatomic) BOOL isInitedSuccess;
@property (nonatomic) int engineSeekStatus;
@property (retain, nonatomic) NSMutableDictionary *algorithmParams;
@property (retain, nonatomic) VEBitsRTTransUtil *bitsRTTransUtil;
@property (nonatomic) BOOL isHDR;
@property (nonatomic) BOOL enable10bitRT;
@property (nonatomic) BOOL useEffectSensor;
@property (nonatomic) int sourceVideoType;
@property (nonatomic) int playerStatus;
@property (nonatomic) BOOL enableOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)configAnimSeqCacheLimit:(float)a0;
+ (BOOL)checkError:(int)a0 msg:(id)a1;

- (void)refreshEffectColorSpace:(id)a0;
- (BOOL)checkInitSuccessed;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })a0 config:(id)a1 context:(id)a2;
- (void)setAlgoParamsAndApplyForKey:(id)a0 value:(id)a1;
- (void)innerInit:(id)a0;
- (id)jsonFrom:(id)a0;
- (void)setFeature:(id)a0 enable:(BOOL)a1;
- (void)destroyUselessFeatures;
- (void)p_updateEngineMode;
- (void)addFeatureWithParameters:(id)a0;
- (void)setFeature:(id)a0 order:(int)a1;
- (BOOL)setFeature:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (void)setFeature:(id)a0 subStartTime:(double)a1 subEndTime:(double)a2 params:(id)a3;
- (void)setFeature:(id)a0 scaleX:(double)a1 scaleY:(double)a2 scaleZ:(double)a3 params:(id)a4;
- (void)setRenderCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFeature:(id)a0 subfabDir:(id)a1 params:(id)a2;
- (void)processAlgorithmWithTexture:(id)a0 size:(struct CGSize { double x0; double x1; })a1 time:(double)a2;
- (void)setCurrentInputTexture:(id)a0 outputTexture:(id)a1 time:(double)a2;
- (void)setFeature:(id)a0 params:(id)a1;
- (void)setFeatures:(id)a0 enable:(BOOL)a1;
- (void)markNeedDestroyFeature:(id)a0;
- (void)setFeatureKeyFrameInfo:(id)a0 pts:(unsigned long long)a1 FeatureIdentifier:(id)a2;
- (void)removeFeaturePts:(unsigned long long)a0 FeatureIdentifier:(id)a1;
- (void)removeAllFeatureKeyFrames:(id)a0;
- (id)getFeatureKeyFrameInfo:(unsigned long long)a0 FeatureIdentifier:(id)a1;
- (void)disableAllFeatures;
- (void)setFeaturesOrder:(id)a0;
- (void)setAlgorithmeBuffer:(void *)a0 isSlameBuffer:(BOOL)a1;
- (void)setAlgorithmeBuffer:(char **)a0 bufferSize:(int)a1 stopMotionBuffer:(void **)a2;
- (void)deleteStopmotionbuffer:(void *)a0;
- (unsigned long long)getshadoCountWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeFeature:(id)a0;

@end
