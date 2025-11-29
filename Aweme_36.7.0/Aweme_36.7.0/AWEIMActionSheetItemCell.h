@class UIImageView, AWEIMActionSheetItemModel, UILabel, UIView;

@interface AWEIMActionSheetItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMActionSheetItemModel *itemModel;
@property (retain, nonatomic) UIView *highlightMaskView;

- (void)awe_themeDidChange:(long long)a0;
- (void)layoutWithItemModel:(id)a0 itemArray:(id)a1;
- (void)setupBindingWithFunctionModel:(id)a0;
- (void)setupImageWithIconName:(id)a0;
- (void)configWith:(id)a0 itemArray:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
