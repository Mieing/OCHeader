@class IESECShopSearchHistoryCellVM;

@interface IESECShopSearchHistoryCapsuleCell : IESECShopSearchCapsuleCell

@property (retain, nonatomic) IESECShopSearchHistoryCellVM *viewModel;

+ (struct CGSize { double x0; double x1; })cellSizeWithViewModel:(id)a0;

- (void)bindViewModel:(id)a0;
- (void)foldBtnTapped;
- (void)containerTapped;
- (void)suffixIconBtnTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
