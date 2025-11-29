@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMFlowAlertView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)actionButtonClicked;
- (id)initWithActionBlock:(id /* block */)a0 title:(id)a1 desc:(id)a2;
- (void)showAlertWithAnimation;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupUI;

@end
