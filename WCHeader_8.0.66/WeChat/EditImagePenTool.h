@class UIColor, NSString, CAShapeLayer, UIImageView;

@interface EditImagePenTool : MMObject <WCEditImageToolProtocol> {
    struct CGPath { } *_path;
    struct CGPoint { double x; double y; } _initialPoint;
    BOOL _initial;
    CAShapeLayer *slayer;
    UIImageView *tView;
    struct CGPath { } *_subpath;
    CAShapeLayer *_tmpLayer;
}

@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)createLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })addPathWithP2Point:(struct CGPoint { double x0; double x1; })a0 withP1Point:(struct CGPoint { double x0; double x1; })a1 withCPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)drawLayer;
- (id)getCurrentShapeLayer;
- (void)dealloc;
- (void).cxx_destruct;

@end
