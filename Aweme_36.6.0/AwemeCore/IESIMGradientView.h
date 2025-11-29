@class NSArray, NSString;

@interface IESIMGradientView : UIView <IESIMGradientViewProtocol>

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL canReturnSelfInHitTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addTopGradientViewForView:(id)a0 fromColor:(id)a1 toColor:(id)a2 height:(double)a3;
+ (id)addBottomGradientViewForView:(id)a0 fromColor:(id)a1 toColor:(id)a2 height:(double)a3;
+ (Class)layerClass;

- (void)simulateBezierGradientWithCount:(unsigned int)a0;
- (void).cxx_destruct;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
