@class UIView;

@interface IESECShopGoodsDividerLineComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UIView *dividerLine;

+ (id /* block */)dividerLineWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
