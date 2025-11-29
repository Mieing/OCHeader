@class IESECShopDividerLineConfigModel, CAShapeLayer;

@interface IESECShopDividerLineView : UIView {
    IESECShopDividerLineConfigModel *_model;
    CAShapeLayer *_diverLineLayer;
}

- (void)updateColorWithPercent:(double)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;

@end
