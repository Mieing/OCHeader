@class UILabel, UIColor, UIView;

@interface CJPayMultiBankVoucherView : UIView

@property (retain, nonatomic) UIView *multiBankView;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) UIColor *iconBgColor;
@property (nonatomic) unsigned long long iconRadius;

- (void)updateWithUrls:(id)a0 voucherDesc:(id)a1 voucherDetail:(id)a2 voucherColor:(id)a3;
- (void)updateWithUrls:(id)a0 voucherDesc:(id)a1 voucherDescColor:(id)a2 voucherDetail:(id)a3 voucherDetailColor:(id)a4 voucherFont:(id)a5;
- (void)p_addCornerBackgroundViewToView:(id)a0;
- (id)p_snapShotImageWithView:(id)a0;
- (id)p_getAttributedStringWithImage:(id)a0 voucherDesc:(id)a1 voucherDescColor:(id)a2 voucherDetail:(id)a3 voucherDetailColor:(id)a4 voucherFont:(id)a5;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
