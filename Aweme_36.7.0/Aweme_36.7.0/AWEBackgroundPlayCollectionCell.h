@class UILabel;

@interface AWEBackgroundPlayCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL adapterTheme;

+ (id)contentWithSettingsType:(long long)a0;
+ (double)cellWidthWithType:(long long)a0;
+ (id)identifier;

- (void)updateSelected:(BOOL)a0;
- (void)updateWithSettingsType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
