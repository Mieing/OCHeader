@class IESECWinGoodsTitleLabel;

@interface IESECRelationTitleComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECWinGoodsTitleLabel *titleLabel;

+ (double)titleHeightWithModel:(id)a0 componentWidth:(double)a1 lineHeight:(double)a2 numberOfLines:(long long)a3 titleLineSpace:(double)a4 tagHeight:(double)a5 lineBreakMode:(long long)a6;
+ (id /* block */)titleWithLineHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 numberOfLines:(long long)a2 titleHeight:(double)a3 tagHeight:(double)a4 titleLineSpace:(double)a5 lineBreakMode:(long long)a6 fontWeight:(double)a7;
+ (double)titleNewHeightWithModel:(id)a0 componentWidth:(double)a1 lineHeight:(double)a2 numberOfLines:(long long)a3 titleLineSpace:(double)a4 tagHeight:(double)a5 lineBreakMode:(long long)a6 fontSize:(double)a7 fontWeight:(double)a8;
+ (id /* block */)titleWithNumberOfLines:(long long)a0 lineBreakMode:(long long)a1;
+ (id /* block */)titleWithTitleHeight:(double)a0 tagHeight:(double)a1 lineBreakMode:(long long)a2;
+ (id /* block */)titleWithTitleHeight:(double)a0 numberOfLines:(double)a1 tagHeight:(double)a2 lineBreakMode:(long long)a3;
+ (id /* block */)titleNewWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 numberOfLines:(long long)a2 titleHeight:(double)a3 tagHeight:(double)a4 titleLineSpace:(double)a5 lineBreakMode:(long long)a6 fontSize:(double)a7 fontWeight:(double)a8;
+ (id /* block */)title;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
