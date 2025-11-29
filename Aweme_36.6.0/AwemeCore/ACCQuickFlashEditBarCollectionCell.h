@class UIImageView, UILabel;

@interface ACCQuickFlashEditBarCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
