@class UILabel;

@interface AWESettingsTableViewRightCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

+ (double)cellWidthWithContent:(id)a0;
+ (id)identifier;

- (void)updateSelectedStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithTitle:(id)a0;

@end
