@class BDASplashCreativeLynxViewContainer, NSString, NSDictionary, BDASplashOptimizeRenderViewModel, UIBezierPath, NSMutableDictionary, IESLiveVideoGiftController;
@protocol MTLCommandQueue, MTLDevice, MTLRenderPipelineState;

@interface BDASplashOptimizeRenderView : BDASplashComplianceBaseSlideView <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) BDASplashOptimizeRenderViewModel *viewModel;
@property (retain, nonatomic) IESLiveVideoGiftController *alphaVideoController;
@property (nonatomic) double loadTime;
@property (nonatomic) BOOL isNative;
@property (nonatomic) BOOL isClick;
@property (nonatomic) BOOL isShapeClick;
@property (copy, nonatomic) NSString *liveText;
@property (copy, nonatomic) NSDictionary *alphaVideoInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFrame;
@property (retain, nonatomic) UIBezierPath *clickPath;
@property (retain, nonatomic) NSMutableDictionary *animateTextureInfo;
@property (retain, nonatomic) NSMutableDictionary *emptyTextureInfo;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) BDASplashCreativeLynxViewContainer *lynxContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)addGesture;
- (void)showLynxView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)showAlphaVideo;
- (void)renderFail;
- (id)createMaskResourceWithDict:(id)a0;
- (void)loadOffscreenRenderWithModel:(id)a0;
- (id)loadEmptyTextureWithSize:(struct CGSize { double x0; double x1; })a0 device:(id)a1;
- (void).cxx_destruct;
- (void)updateConfig;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
