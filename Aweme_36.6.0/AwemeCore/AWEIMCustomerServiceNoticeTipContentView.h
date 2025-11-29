@class UIImageView, YYLabel, AWEIMCustomerServiceNoticeTipContentProps;

@interface AWEIMCustomerServiceNoticeTipContentView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleLable;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) AWEIMCustomerServiceNoticeTipContentProps *props;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_updateConstraints;
- (void)p_iconViewRemoveAnimation;
- (void)p_iconViewAddAnimation;
- (void)p_initProps;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
