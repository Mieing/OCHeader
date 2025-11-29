@class BDImageView, DUXButton, AWEProfileHeaderContext, YYLabel;

@interface AWEProfileHeaderRemindBannerView : UIView

@property (weak, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) BDImageView *iconView;
@property (retain, nonatomic) YYLabel *remindLabel;
@property (retain, nonatomic) DUXButton *closeButton;

- (void)clickCloseButton;
- (void)configWithContext:(id)a0;
- (void)clickLink;
- (void)p_addTruncationToken;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
