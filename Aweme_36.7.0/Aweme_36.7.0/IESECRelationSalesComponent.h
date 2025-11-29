@class UILabel;

@interface IESECRelationSalesComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UILabel *salesLabel;

+ (id /* block */)sales;
+ (id /* block */)salesWithHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (double)salesWidthWithModel:(id)a0;
+ (id /* block */)salesWithSalesWidth:(double)a0;
+ (id /* block */)salesWithSalesWidth:(double)a0 salesHeight:(double)a1 textColor:(id)a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
