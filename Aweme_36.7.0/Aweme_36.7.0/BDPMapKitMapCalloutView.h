@class BDPMapCalloutViewModel, UILabel, CAShapeLayer;
@protocol BDPMapKitMapCalloutViewDelegate;

@interface BDPMapKitMapCalloutView : UIView

@property (copy, nonatomic) BDPMapCalloutViewModel *model;
@property (weak, nonatomic) id<BDPMapKitMapCalloutViewDelegate> delegate;
@property (weak, nonatomic) CAShapeLayer *calloutLayer;
@property (weak, nonatomic) CAShapeLayer *maskLayer;
@property (weak, nonatomic) UILabel *textLabel;

- (void)tapGestureAction:(id)a0;
- (void)p_initProperties;
- (id)initWithMapPointAnnotation:(id)a0 delegate:(id)a1;
- (void)updateStyleWithMapPointAnnotation:(id)a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
