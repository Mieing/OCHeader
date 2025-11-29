@class UILabel;

@interface AWEOfficialSubCategoryDetailListCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)updateUIIfSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
