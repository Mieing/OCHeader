@class UILabel;

@interface AWEVSFormatCategoryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;

+ (id)titleDefaultFont;
+ (id)identifier;

- (id)titleSelectedFont;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
