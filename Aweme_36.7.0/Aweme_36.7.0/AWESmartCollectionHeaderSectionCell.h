@class UILabel, UIView;

@interface AWESmartCollectionHeaderSectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *lineView;

+ (double)labelLeftPadding;
+ (double)labelRightPadding;
+ (double)labelTopBottomPadding;
+ (double)cellHeightWithWidth:(double)a0 content:(id)a1;
+ (id)label;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
