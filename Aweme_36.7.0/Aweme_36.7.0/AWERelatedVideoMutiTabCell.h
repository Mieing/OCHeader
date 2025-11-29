@class UILabel, UIView;

@interface AWERelatedVideoMutiTabCell : UICollectionViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *label;

+ (id)tagFontWithSelected:(BOOL)a0;
+ (double)horizontalOffset;
+ (id)identifier;

- (void)updateSelectedStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithDescription:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
