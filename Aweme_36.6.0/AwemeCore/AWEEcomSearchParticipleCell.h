@class UIImageView, UILabel, UIView;

@interface AWEEcomSearchParticipleCell : UICollectionViewCell <AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UIImageView *participlLeft;
@property (retain, nonatomic) UIImageView *participlRight;
@property (retain, nonatomic) UILabel *participlTitle;
@property (retain, nonatomic) UILabel *bottomTitle;
@property (retain, nonatomic) UIView *longLineleft;
@property (retain, nonatomic) UIView *longLineRight;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;

@end
