@class VEAmazingFrameExtractor, VEStopMotionUtil, NSArray, IESKeyframeTimeAndCountInfo, NSMutableDictionary, VEAmazingEffectRenderer, VEColorSpaceInfo, NSMutableArray;

@interface VEAmazingEffectFilter : HTSGLFilter

@property (retain, nonatomic) VEAmazingEffectRenderer *renderer;
@property (retain, nonatomic) NSArray *curFeatures;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (retain, nonatomic) VEAmazingFrameExtractor *frameExtrator;
@property (retain, nonatomic) IESKeyframeTimeAndCountInfo *keyFrameTimeAndCountInfo;
@property (retain, nonatomic) VEColorSpaceInfo *colorSpaceInfo;
@property (nonatomic) BOOL isEnableFeatureHandleLoadOpt;
@property (nonatomic) BOOL isEnableFeatureHandleLoadOpt_forEditor;
@property (retain, nonatomic) NSMutableArray *featureHandleCache;
@property (retain, nonatomic) NSMutableDictionary *featureLoadStatusDic;
@property (retain, nonatomic) VEStopMotionUtil *stopMotionUtil;
@property (nonatomic) int sourceVideoType;
@property (nonatomic) int playerStatus;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)refreshEffectColorSpace:(id)a0;
- (void)updateFeatures:(id)a0 colorSpaceInfo:(id)a1;
- (void)deleteFeatureKeyFrames:(id)a0;
- (id)getFeatureKeyFrameJsonStr:(unsigned long long)a0 feature:(id)a1;
- (id)initWithFeatures:(id)a0 effectRender:(id)a1 config:(id)a2 colorSpaceInfo:(id)a3 context:(id)a4;
- (id)initWithFeatures:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 config:(id)a2 colorSpaceInfo:(id)a3 context:(id)a4;
- (void)addFrameExtractDriver:(id)a0;
- (void)setAlgoParamsAndApplyForKey:(id)a0 value:(id)a1;
- (id)initWithFeatures:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 config:(id)a2 colorSpaceInfo:(id)a3 effectRender:(id)a4 context:(id)a5;
- (void)addFeature:(id)a0 colorSpaceInfo:(id)a1;
- (void)returnHandleToCacheArray:(id)a0;
- (void)updateCurrentFeaturesForExport:(double)a0;
- (void)updateCurrentFeaturesForEditor:(double)a0;
- (void)updateFeature:(id)a0 curFeature:(id)a1;
- (void)updateSubFeaturesIfNeeded:(id)a0;
- (void)updateFeatureKeyFrames:(id)a0;
- (void)updateSubFeatures:(id)a0 curFeature:(id)a1;
- (void)reculateTimeForKeyFrame:(id)a0;
- (id)initWithFeatures:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 config:(id)a2 colorSpaceInfo:(id)a3;
- (id)initWithFeatures:(id)a0 effectRender:(id)a1 config:(id)a2 colorSpaceInfo:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
