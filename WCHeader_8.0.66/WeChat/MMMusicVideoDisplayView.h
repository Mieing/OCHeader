@class NSArray, MVVideoEffectRendererView, MVVideoPixelBuffer;

@interface MMMusicVideoDisplayView : UIView

@property (retain, nonatomic) NSArray *transitions;
@property (retain, nonatomic) MVVideoEffectRendererView *contentView;
@property (retain, nonatomic) MVVideoPixelBuffer *currentVideoPixelBuffer;
@property (retain, nonatomic) MVVideoPixelBuffer *previousVideoPixelBuffer;
@property (nonatomic) BOOL disableTransition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)shouldRender:(id)a0;
- (void)tryFixTimeStampIn:(id)a0;
- (BOOL)isNextVideoBetweenPrevious:(id)a0 andCurrent:(id)a1;
- (void)renderToScreen;
- (struct CGSize { double x0; double x1; })rendererSize;
- (id)generateRenderTask;
- (id)generateTaskWithTransition:(id)a0;
- (id)generateRenderTaskWithoutTransitioning;
- (id)currentTransition;
- (void)addBlurEffectForRenderWithRadius:(float)a0;
- (void)clearCachedPixelBuffer;
- (void)layoutSubviews;
- (void)updateSubviewFrame;
- (void)clearDisplay;
- (BOOL)isTransitioningWithCurrentTransition:(id)a0;
- (void).cxx_destruct;

@end
