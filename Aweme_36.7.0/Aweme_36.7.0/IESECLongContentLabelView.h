@class UILabel, IESECUIImageView;

@interface IESECLongContentLabelView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) IESECUIImageView *backgroundImageView;

- (void)configLabelWithElement:(id)a0;
- (void)configLabelWithElement:(id)a0 padding:(id)a1 forceDefaultFont:(BOOL)a2;
- (void)configLabelWithElement:(id)a0 forceDefaultFont:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
