@class UILabel, CAGradientLayer, IESECShopTextLabelItem;

@interface IESECShopCartBottomComponentView : UIView {
    IESECShopTextLabelItem *_model;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateViews;
- (void)updateWithModel:(id)a0;

@end
