@class UIImageView, UILabel, DUXButton;

@interface AWEPayRPDetailBestLuckView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) DUXButton *sendButton;
@property (copy, nonatomic) id /* block */ sendClickBlock;

- (void)p_sendClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
