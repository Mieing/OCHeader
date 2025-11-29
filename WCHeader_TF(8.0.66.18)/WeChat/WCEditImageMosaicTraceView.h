@class CALayer, NSString, CAShapeLayer;

@interface WCEditImageMosaicTraceView : EditImageUIView <WCEditImageTraceViewProtocol>

@property (retain, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) CAShapeLayer *highLightLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic, getter=isHighLight) BOOL highLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyLayer:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mosaicImage:(id)a1 shapeLayer:(id)a2;
- (void)updateWithPath:(struct CGPath { } *)a0;
- (BOOL)isViewPathContainPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)highLightPenTraceAtPointIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)setPenTraceViewHighLight:(BOOL)a0;
- (BOOL)isPenTraceViewHighLight;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
