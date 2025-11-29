@class UILabel, UIView;

@interface WCFinderProfileEndlineCell : UICollectionReusableView

@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UILabel *textLabel;

+ (double)textLabelWidth:(double)a0;
+ (double)displayHeightWithWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
