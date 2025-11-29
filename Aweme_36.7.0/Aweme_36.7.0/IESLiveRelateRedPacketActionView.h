@class NSString, UILabel, UIView, UIButton;

@interface IESLiveRelateRedPacketActionView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *associateButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *horizontalSeparatorLine;
@property (copy, nonatomic) NSString *associationTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 actionTitle:(id)a1 action:(id /* block */)a2 cancel:(id /* block */)a3;
- (void)associateButtonTapped;
- (void).cxx_destruct;
- (void)setupUI;
- (void)cancelButtonTapped;

@end
