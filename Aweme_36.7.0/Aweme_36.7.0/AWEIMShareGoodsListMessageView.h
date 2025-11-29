@class UIView, AWEIMShareGoodsListMessageProps;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMShareGoodsListMessageView : UIView

@property (retain, nonatomic) AWEIMShareGoodsListMessageProps *props;
@property (retain, nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> *enterpriseCardView;

- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
