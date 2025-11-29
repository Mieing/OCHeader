@class UIImageView, UILabel, UIFont;

@interface AWELandscapeMorePanelCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIFont *defaultFont;

+ (BOOL)shouldShowTwoLineStyle;
+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)updateWithPanelCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
