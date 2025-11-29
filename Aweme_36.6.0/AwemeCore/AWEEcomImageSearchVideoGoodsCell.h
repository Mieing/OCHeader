@class YYLabel, UIImageView, NSString;

@interface AWEEcomImageSearchVideoGoodsCell : UICollectionViewCell

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) struct CGSize { double width; double height; } textRect;

+ (id)textLabelFont;
+ (double)withExcludeText;

- (void)configUI;
- (void)updateWithUnitModel:(id)a0;
- (double)textLabelHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
