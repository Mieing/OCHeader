@class UILabel;

@interface AWEVideoCoverRecommendTextCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;

+ (id)reuseIdentifierKey;
+ (struct CGSize { double x0; double x1; })sizeWithText:(id)a0;

- (void)configCellText:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
