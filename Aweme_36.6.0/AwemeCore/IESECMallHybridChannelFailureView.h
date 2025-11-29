@class UIImageView, UILabel, UIButton;

@interface IESECMallHybridChannelFailureView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)refreshButtonAction;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
