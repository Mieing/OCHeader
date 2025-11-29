@class UILabel, CAGradientLayer;

@interface AWEEcomImageSearchDividerCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UILabel *textView;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)updateGradientLayerPosition;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
