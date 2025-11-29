@class UILabel;

@interface AWEProgressChapterCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *desLabel;

+ (BOOL)optimizeProgressBigFont;
+ (id)cellFontWithSelected:(BOOL)a0;

- (void)__configSubviews;
- (void)configCellWithText:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
