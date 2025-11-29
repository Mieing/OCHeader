@class DVEStoryColor, UIView;

@interface DVEHorizontalColorBaseCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) DVEStoryColor *colorValue;
@property (copy, nonatomic) id /* block */ didClickColorView;

- (void)configCellWithColorValue:(id)a0;
- (void)updateWithAnimation;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
