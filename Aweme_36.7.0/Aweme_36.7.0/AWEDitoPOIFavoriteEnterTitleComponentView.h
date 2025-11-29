@class UILabel, UIImageView, AWEDitoPOIFavoriteEnterTitleComponentViewModel;

@interface AWEDitoPOIFavoriteEnterTitleComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteEnterTitleComponentViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) UIImageView *iconView;

- (void)updateViewModel:(id)a0;
- (void)didTapEnterLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
