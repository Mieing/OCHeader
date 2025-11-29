@class UIButton, UIView;

@interface AWEBDPRankListRemindView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *knownButton;

- (void)setupTitleLabelView;
- (void)setupKnownButton;
- (void)onKnownButtonTap:(id)a0;
- (void)onCancelButtonTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupCancelButton;
- (void)setupImageView;

@end
