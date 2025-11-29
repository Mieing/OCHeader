@class NSArray, IESECSliceXViewElementView, NSString, IESECGCDTimer, NSObject;
@protocol OS_dispatch_source;

@interface IESECSkuMarqueeView : IESECSliceXViewElementView <IESECSliceXFlexObserver>

@property (nonatomic) unsigned long long nextDisplayIndex;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) IESECGCDTimer *displayTimer;
@property (nonatomic) double switchInterval;
@property (nonatomic) double animationInterval;
@property (nonatomic) unsigned long long scrollDirection;
@property (weak, nonatomic) IESECSliceXViewElementView *displayView;
@property (nonatomic) BOOL subviewsDidLayout;
@property (nonatomic) struct CGSize { double width; double height; } prevBoundsSize;
@property (retain, nonatomic) NSArray *preMarqueeData;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayTimer;
@property (nonatomic) double scrollDelayInterval;
@property (nonatomic) BOOL prevHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dismissRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })onShowRect;
- (void)p_setupTimerIfNeeded;
- (void)configUIIfNeeded;
- (void)p_startDelayedTimer;
- (void)p_startMainTimer;
- (void)p_showNextItemWithAnimation;
- (void)flexDidLayout:(id)a0;
- (id)flexSubviews;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayRect;

@end
