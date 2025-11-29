@class UIImageView, UILabel;

@interface CJPayLoginLogoStyleDetailView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *serviceDescLabel;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) UILabel *merchantMsgLabel;

- (void)p_setupConstraints;
- (void)updateLogoStyleDetailWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
