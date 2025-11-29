@class UILabel, UIImageView, UIView;

@interface IESLLPOIDetailCOIHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageLeft1;
@property (retain, nonatomic) UIImageView *imageLeft2;
@property (retain, nonatomic) UIImageView *imageRight1;
@property (retain, nonatomic) UIImageView *imageRight2;
@property (readonly, nonatomic) UIView *bottomBGView;

- (void)configWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
