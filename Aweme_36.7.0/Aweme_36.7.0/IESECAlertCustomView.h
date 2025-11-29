@class UILabel, UIImageView;

@interface IESECAlertCustomView : UIView

@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *imageView;

- (void)setupUIWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;

@end
