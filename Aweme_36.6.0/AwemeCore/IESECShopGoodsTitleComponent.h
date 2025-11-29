@class IESECShopGoodsTitleLabelV2;

@interface IESECShopGoodsTitleComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECShopGoodsTitleLabelV2 *titleLabel;

+ (id /* block */)titleWithLineHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 numberOfLines:(long long)a2 titleHeight:(double)a3 tagHeight:(double)a4 titleLineSpace:(double)a5 lineBreakMode:(long long)a6 font:(id)a7;
+ (double)titleHeightWithModel:(id)a0 componentWidth:(double)a1 lineHeight:(double)a2 numberOfLines:(long long)a3 titleLineSpace:(double)a4 tagHeight:(double)a5 lineBreakMode:(long long)a6 font:(id)a7;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
