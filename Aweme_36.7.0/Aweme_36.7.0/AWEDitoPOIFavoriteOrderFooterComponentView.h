@class AWEDitoPOIFavoriteOrderFooterCellViewModel, UILabel, UIImageView;

@interface AWEDitoPOIFavoriteOrderFooterComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteOrderFooterCellViewModel *viewModel;
@property (retain, nonatomic) UILabel *footerTextLabel;
@property (retain, nonatomic) UIImageView *rightIcon;

- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;
- (void)handleTap;

@end
