@class UIImageView, AWEButton, UIView, UILabel, UIButton;

@interface AWEShareTokenLiveMessageChannelView : AWEShareReflowBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEButton *openButton;
@property (retain, nonatomic) UIButton *reportButton;
@property (copy, nonatomic) id /* block */ tapCoverBlock;
@property (copy, nonatomic) id /* block */ tapDismissBlock;
@property (copy, nonatomic) id /* block */ tapOpenBlock;
@property (copy, nonatomic) id /* block */ tapReportBlock;

- (void)reportButtonTapped:(id)a0;
- (void)videoCoverTapped:(id)a0;
- (void)setupAccessbilityWithTitle:(id)a0 subtitle:(id)a1;
- (void)dismissWithBlock:(id /* block */)a0;
- (void)openButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;
- (void)updateWithModel:(id)a0;

@end
