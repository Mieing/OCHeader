@class IESECSKUCarAdaptViewModel, UILabel, UIView, IESECUIImageView;

@interface IESECSKUCarAdaptCell : UICollectionViewCell

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECUIImageView *icon;
@property (retain, nonatomic) UILabel *discptionLabel;
@property (retain, nonatomic) UILabel *carNameLabel;
@property (retain, nonatomic) UILabel *changeCarLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImage;
@property (retain, nonatomic) IESECSKUCarAdaptViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
