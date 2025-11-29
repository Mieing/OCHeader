@class BDPDirectionDetailButton, CAShapeLayer, UILabel, UIView, CALayer;

@interface BDPDirectionDetailView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) BDPDirectionDetailButton *naviButton;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *shadowLayer;

- (void).cxx_destruct;
- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
