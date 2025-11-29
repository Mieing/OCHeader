@class UIImageView, UILabel, IESLiveNativeAppShelfThirdAbilityModel, UIView;

@interface IESLiveNativeAppShelfThirdAbilityCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveNativeAppShelfThirdAbilityModel *model;
@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *dot;
@property (retain, nonatomic) UILabel *status;
@property (retain, nonatomic) UIImageView *image;

- (void)updateAbilityStatus;
- (void)updateWithAbilityModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
