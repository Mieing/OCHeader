@class IESECGCDTimer, NSString, IESECSliceXViewElementView;

@interface IESECSliceXBuyNowMarqueeView : IESECSliceXViewElementView <IESECSliceXFlexObserver>

@property (nonatomic) BOOL subviewsDidLayout;
@property (nonatomic) struct CGSize { double width; double height; } prevBoundsSize;
@property (nonatomic) unsigned long long nextDisplayIndex;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) IESECGCDTimer *displayTimer;
@property (nonatomic) double switchInterval;
@property (nonatomic) double animationInterval;
@property (nonatomic) double startDelay;
@property (nonatomic) unsigned long long scrollDirection;
@property (retain, nonatomic) IESECSliceXViewElementView *displayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (id)initWithPreloadContext:(id)a0;
- (void)p_setupTimerIfNeeded;
- (void)configUIIfNeeded;
- (void)p_showNextItemWithAnimation;
- (void)flexDidLayout:(id)a0;
- (id)flexSubviews;
- (void)p_setRectWithView:(id)a0 itemPosition:(long long)a1;
- (void)p_marqueeScrollWithMarqueeItemView:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
