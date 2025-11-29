@class NSObject, NSArray, NSString, MAVEffectRenderer, NSMutableArray, MAVMTLView;
@protocol OS_dispatch_queue;

@interface MVVideoEffectRendererView : UIView <MTKViewDelegate>

@property (retain, nonatomic) MAVEffectRenderer *effectRender;
@property (retain, nonatomic) MAVMTLView *glkView;
@property (retain, nonatomic) NSMutableArray *pendingTaskList;
@property (retain, nonatomic) NSArray *transitionList;
@property (nonatomic) BOOL shouldClearDisplayContent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderDispatchQueue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayFrame;
@property (nonatomic) BOOL isApplicationActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)setupSubviews;
- (void)shouldRender:(id)a0;
- (void)_shouldRender:(id)a0;
- (void)displayGlkView;
- (void)renderToScreenWithTask:(id)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSubviewFrame;
- (struct CGSize { double x0; double x1; })rendererSize;
- (void)addBlurEffectForRenderWithRadius:(float)a0;
- (void)setTransitions:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (BOOL)isValidStatus;
- (void)clearDisplay;
- (void).cxx_destruct;

@end
