@class DVEBaseLabel, UIView;

@interface DVETransitionPickerCategoryCellNew : DVEPickerCategoryBaseCell

@property (retain, nonatomic) DVEBaseLabel *titleLabel;
@property (retain, nonatomic) UIView *indicateView;

- (void)setCategoryModel:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
