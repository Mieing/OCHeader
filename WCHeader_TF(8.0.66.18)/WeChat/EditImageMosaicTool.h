@class UIColor, NSString, EditImageUIView;
@protocol MosaicToolDelegate;

@interface EditImageMosaicTool : MMObject <WCEditImageToolProtocol> {
    struct CGPoint { double x; double y; } _initialPoint;
    BOOL _initial;
    struct CGPath { } *_path;
    EditImageUIView *tView;
}

@property (weak, nonatomic) id<MosaicToolDelegate> _delegate;
@property (nonatomic) unsigned long long _style;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithStyle:(unsigned long long)a0;
- (id)createShapeLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })addPathWithP2Point:(struct CGPoint { double x0; double x1; })a0 withP1Point:(struct CGPoint { double x0; double x1; })a1 withCPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)getCurrentShapeLayer;
- (void)drawLayer;
- (id)getTraceView;
- (void)dealloc;
- (void).cxx_destruct;

@end
