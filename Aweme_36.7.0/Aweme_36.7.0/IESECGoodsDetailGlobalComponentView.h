@class IESECGoodsDetailModel, UILabel;

@interface IESECGoodsDetailGlobalComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsDetailModel *goodsModel;
@property (retain, nonatomic) UILabel *globalBrandLabel;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)setupCurrentGlobalView;
- (void)openGlobalPanel;
- (void).cxx_destruct;
- (void)setupAccessibility;

@end
