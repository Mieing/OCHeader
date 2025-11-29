@class UILabel, BDPMapLabelViewModel, CAShapeLayer;
@protocol BDPMapKitMapLabelViewDelegate;

@interface BDPMapKitMapLabelView : UIView

@property (copy, nonatomic) BDPMapLabelViewModel *model;
@property (weak, nonatomic) id<BDPMapKitMapLabelViewDelegate> delegate;
@property (weak, nonatomic) UILabel *textLabel;
@property (weak, nonatomic) CAShapeLayer *labelLayer;
@property (weak, nonatomic) CAShapeLayer *maskLayer;

- (void)tapGestureAction:(id)a0;
- (void)p_initProperties;
- (id)initWithMapPointAnnotation:(id)a0 delegate:(id)a1;
- (void)updateStyleWithMapPointAnnotation:(id)a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
