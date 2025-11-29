@class UIImageView, UILabel, UIView;

@interface AWERadarCreateGroupCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setupUI;

@end
