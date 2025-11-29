@class UILabel, UIImageView, UIView;

@interface AWEIMGroupMemberBlockTimeCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *line;

+ (id)identifier;

- (void)showSelectedImage:(BOOL)a0;
- (void)configWithTtile:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
