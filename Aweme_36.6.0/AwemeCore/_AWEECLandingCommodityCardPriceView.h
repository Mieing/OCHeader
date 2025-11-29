@class UILabel, UIStackView;

@interface _AWEECLandingCommodityCardPriceView : UIView <IESECLLComponent> {
    UILabel *_prefixLabel;
    UILabel *_priceLabel;
    UILabel *_suffixLabel;
    UIStackView *_contentView;
}

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupSubviews;

@end
