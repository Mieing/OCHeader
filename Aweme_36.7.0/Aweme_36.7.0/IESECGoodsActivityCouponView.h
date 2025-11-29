@class IESECGoodsDetailParameters, UIView, IESECButton;

@interface IESECGoodsActivityCouponView : UIView

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECButton *leftAreaButton;
@property (retain, nonatomic) IESECButton *rightAreaButton;
@property (retain, nonatomic) UIView *rightShadowBGView;

- (void)addShadowToView:(id)a0 shadowColor:(id)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)updateData;

@end
