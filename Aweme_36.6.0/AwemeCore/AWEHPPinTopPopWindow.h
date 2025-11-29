@class UITapGestureRecognizer, NSString, NSTimer, DUXButton, AWEHPPinTopComponentUIConfig, UIView, DUXBaseLabel;
@protocol AWEHPPinTopUILifeCycleProtocol;

@interface AWEHPPinTopPopWindow : UIView <CAAnimationDelegate, AWEHPPinTopComponentProtocol>

@property (retain, nonatomic) AWEHPPinTopComponentUIConfig *config;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) DUXButton *primaryButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView<AWEHPPinTopUILifeCycleProtocol> *businessView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (nonatomic) long long dismissType;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) NSTimer *autoHideTimer;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) BOOL shouldDismissWhenPointOutSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCloseButton;
- (void)startAutoHideIfNeeded;
- (void)showPinTopComponentOnViewController:(id)a0 withButtonAction:(id /* block */)a1 didShow:(id /* block */)a2 didDismiss:(id /* block */)a3;
- (void)setShowAnimation;
- (void)setHideAnimation;
- (void)p_dismiss;
- (void)clickPrimaryButton;
- (void)clickSecondaryButton;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)handleSingleTap:(id)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (id)closeButton;

@end
