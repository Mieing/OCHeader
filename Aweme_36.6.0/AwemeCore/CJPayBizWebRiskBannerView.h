@class CJPayButton, UIImageView, UILabel, UIView;

@interface CJPayBizWebRiskBannerView : UIView

@property (retain, nonatomic) CJPayButton *closeBtn;
@property (retain, nonatomic) UILabel *reskInfoLabel;
@property (retain, nonatomic) UIImageView *warningImageView;
@property (retain, nonatomic) UIView *backColorView;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)updateWarnContent:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
