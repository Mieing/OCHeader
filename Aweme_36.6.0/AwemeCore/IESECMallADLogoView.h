@class UILabel, UIColor;

@interface IESECMallADLogoView : UIView

@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UIColor *adLabelDefaultColor;
@property (retain, nonatomic) UIColor *backgroundDefaultColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
