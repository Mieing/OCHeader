@class UIImageView, UILabel;

@interface ACCASMusicCategoryTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *categoryNameLabel;

+ (double)recommendedHeight;
+ (id)identifier;

- (void)configWithMusicCategoryModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
