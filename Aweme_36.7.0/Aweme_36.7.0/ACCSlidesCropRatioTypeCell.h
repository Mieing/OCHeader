@class UILabel, UIImageView;

@interface ACCSlidesCropRatioTypeCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *circleImageView;

+ (id)cellIdentifier;

- (void)p_setupView;
- (void)p_setupLayout;
- (id)p_getImageWithRatioWidth:(double)a0 height:(double)a1 longestSideLength:(double)a2;
- (id)p_getImageWithRatioWidth:(double)a0 height:(double)a1 longestSideLength:(double)a2 imageWidth:(double)a3 minPadding:(double)a4 cornerRadius:(double)a5 lineWidth:(double)a6 lineColor:(id)a7 screenRatio:(double)a8;
- (void)loadData:(id)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
