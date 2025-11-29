@class UILabel, UIView;

@interface AWEECShoppingAIGuideDividerCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;

+ (double)cellHeightForViewModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)setupUI;

@end
