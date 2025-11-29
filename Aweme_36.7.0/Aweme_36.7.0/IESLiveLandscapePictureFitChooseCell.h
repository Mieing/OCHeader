@class UILabel, HTSLiveGradientBackgroundView, UIView;

@interface IESLiveLandscapePictureFitChooseCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;

- (void)updateWithTitle:(id)a0 isSelected:(BOOL)a1 isLandscapePanelV2Enable:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
