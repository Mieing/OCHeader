@class UILabel, UIButton, UIView;

@interface AWELiveFlowAlertView : HTSEventForwardingView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *animationView;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)layoutSubviews;
- (void)actionButtonClicked;
- (void)showAlertWithAnimation;
- (id)initWithActionBlock:(id /* block */)a0 cancleBlock:(id /* block */)a1;
- (void)_livetrackEvent:(id)a0;
- (id)adapter_getCarrierService;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setupUI;

@end
