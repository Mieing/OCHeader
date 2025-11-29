@class UILabel, UIView;

@interface IESECWinLiveTabEqualPriceTagComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UILabel *equalPriceLabel;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UILabel *salesLabel;

+ (id /* block */)equalPriceTagWithTagHeight:(double)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
