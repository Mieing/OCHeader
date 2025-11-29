@class DUXBaseLabel, DUXButton;

@interface AWEHPEditTitleBar : UIView

@property (readonly, nonatomic) DUXBaseLabel *titleLabel;
@property (readonly, nonatomic) DUXButton *closeButton;

- (void)newSetupUI;
- (void)oldSetupUI;
- (double)p_getCloseSize;
- (id)p_generateCloseButton;
- (id)p_generateTitleLabel;
- (double)p_getCloseImgSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
