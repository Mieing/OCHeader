@class UIView, NSString, IESECSliceXGradientLayer, UITapGestureRecognizer, IESECSliceXElementViewContext, CAShapeLayer, UIImageView, UILongPressGestureRecognizer, NSMutableArray, IESECSliceXElement, UIGestureRecognizer;

@interface IESECSliceXBaseElementView : IESECSliceXBaseView

@property (retain, nonatomic) IESECSliceXElementViewContext *context;
@property (retain, nonatomic) IESECSliceXElement *element;
@property (nonatomic) BOOL hasChangedElement;
@property (retain, nonatomic) UIView *contentWrapperView;
@property (readonly, nonatomic) UIView *bgView;
@property (weak, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) CAShapeLayer *shadowLayer;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) NSString *bgImageURLString;
@property (retain, nonatomic) IESECSliceXGradientLayer *bgGradientLayer;
@property (nonatomic) double bgGradientDegree;
@property (retain, nonatomic) NSMutableArray *exposureActions;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIGestureRecognizer *highlightStyleActivateGesture;

+ (void)initialize;

- (BOOL)setupElementView;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (id)createBgView;
- (id)createBgViewIfNeed;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateContext:(id)a0;

@end
