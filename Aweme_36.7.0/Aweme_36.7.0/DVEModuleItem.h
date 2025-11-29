@class AWEScrollStringLabel, UIImageView, UIView, NSIndexPath;

@interface DVEModuleItem : UICollectionViewCell

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWEScrollStringLabel *titleLabel;
@property (retain, nonatomic) UIView *badgeView;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
