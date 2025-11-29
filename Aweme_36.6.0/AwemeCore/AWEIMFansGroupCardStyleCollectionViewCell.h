@class UIImageView, UILabel, UIView;

@interface AWEIMFansGroupCardStyleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *cardBaseView;
@property (retain, nonatomic) UIImageView *cardImageView;
@property (retain, nonatomic) UIView *cardCenterView;
@property (retain, nonatomic) UILabel *cardTitleLabel;
@property (retain, nonatomic) UILabel *cardDescLabel;
@property (retain, nonatomic) UIView *cardRightView;

+ (id)identifier;

- (void)__setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
