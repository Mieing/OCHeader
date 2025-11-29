@class NSString, IESKeyframeTimeAndCountInfo, IESMMCanvasSrcManager, IESEffectVideoAnimatedRenderer, VEColorSpaceInfo, IESMMCanvasConfig, IESMMCanvasBaseFilter, HTSGLPicture;

@interface IESMMCanvasGroup : HTSGLFilterGroup <IESMMCanvasInteractProtocol, IESMMCanvasConfigProtocol, IESMMCanvasSourceProtocol>

@property (retain, nonatomic) IESMMCanvasBaseFilter *canvaseFilter;
@property (retain, nonatomic) IESMMCanvasSrcManager *srcManager;
@property (retain, nonatomic) IESMMCanvasConfig *config;
@property (retain, nonatomic) HTSGLPicture *canvasPicFilter;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) IESKeyframeTimeAndCountInfo *keyFrameTimeAndCountInfo;
@property (copy, nonatomic) id /* block */ observable;
@property (retain, nonatomic) IESEffectVideoAnimatedRenderer *renderer;
@property (copy, nonatomic) VEColorSpaceInfo *colorSpaceInfo;
@property (nonatomic) BOOL isPassThrough;
@property (nonatomic) BOOL forceDrawCanvas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVideoTrackId:(long long)a0;
- (id)canvasKey;
- (void)updateIsPassThrough:(BOOL)a0;
- (BOOL)isCanvasGroupNeedGetKeyFrame:(unsigned long long)a0;
- (id)getKeyFrameInfo:(unsigned long long)a0;
- (void)registerCanvasSourceBlock:(id /* block */)a0;
- (void)activeVideoAnimation:(id)a0;
- (void)updateKeyFrameInfo;
- (id)initWithConfig:(id)a0 observable:(id /* block */)a1 canvasSize:(struct CGSize { double x0; double x1; })a2 renderer:(id)a3 colorSpaceInfo:(id)a4 context:(id)a5;
- (void)updateColorSpaceInfo:(id)a0;
- (void)setupFilterWithConfig:(id)a0;
- (id)makeFiltersWith:(id)a0;
- (void)setCanvasAnimatedRenderer:(id)a0;
- (void)transformSource:(long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)transformSource:(long long)a0 toRotation:(double)a1;
- (void)transformSource:(long long)a0 toScale:(double)a1;
- (BOOL)changeCanvasConfig:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (void)insertSourceToIndex:(long long)a0;
- (void)removeSourceWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
