@class UILabel, IESECUIImageView, UIView;

@interface IESECSKUPOICell : UICollectionViewCell

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *addrLabel;
@property (retain, nonatomic) UILabel *switchLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImage;

- (id)normalBorderColor;
- (id)selectedBorderColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)normalBackgroundColor;
- (id)selectedBackgroundColor;
- (void)setViewModel:(id)a0;
- (void)setupUI;

@end
