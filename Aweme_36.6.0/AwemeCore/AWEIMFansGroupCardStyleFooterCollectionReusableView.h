@class UIButton, AWEIMFansGroupManagementPlateInfoViewModel, UIView;

@interface AWEIMFansGroupCardStyleFooterCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) AWEIMFansGroupManagementPlateInfoViewModel *viewModel;
@property (retain, nonatomic) UIView *footerBaseView;
@property (retain, nonatomic) UIButton *footerActionBtn;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)identifierWithType:(long long)a0;

- (void)__setupUI;
- (void)__btnClicked;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
