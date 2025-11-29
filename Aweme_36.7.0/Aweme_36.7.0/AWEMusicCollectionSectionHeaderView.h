@class UIButton, AWEMusicSectionHeaderLabel;

@interface AWEMusicCollectionSectionHeaderView : UIView

@property (retain, nonatomic) AWEMusicSectionHeaderLabel *titleLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (copy, nonatomic) id /* block */ addButtonClickBlock;

- (void)configSubviews;
- (void)refreshWithTitle:(id)a0 countStr:(id)a1 showAdd:(BOOL)a2;
- (void)addButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
