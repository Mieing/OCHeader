@class AWESearchBottomInteractorModel, UIImageView, UIBezierPath, UILabel, UIView, CAShapeLayer;

@interface AWESearchBottomInteractorView : UIView

@property (retain, nonatomic) AWESearchBottomInteractorModel *model;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *lineDivider;
@property (retain, nonatomic) UILabel *tailLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIBezierPath *cornerBezierPath;
@property (retain, nonatomic) CAShapeLayer *cornerShapeLayer;
@property (copy, nonatomic) id /* block */ clickBottomBar;

- (void)configDataWithModel:(id)a0;
- (void)addTapGesture;
- (void)tapBar:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
