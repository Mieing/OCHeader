@class UIButton, MMTimer, NSString, KidsWatchTextFieldItem, UIView, MMUILabel;
@protocol KidsWatchRegisterVerifyCodeCardViewDelegate;

@interface KidsWatchRegisterVerifyCodeCardView : UIView <KidsWatchResponsiveView>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) KidsWatchTextFieldItem *rawPhoneNumberTextFieldItem;
@property (retain, nonatomic) UIView *rawPhoneNumberSeparateView;
@property (retain, nonatomic) KidsWatchTextFieldItem *verifyCodeTextFieldItem;
@property (retain, nonatomic) UIView *verifyCodeSeparateView;
@property (retain, nonatomic) UIButton *sendVerifyCodeButton;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned long long countdown;
@property (weak, nonatomic) id<KidsWatchRegisterVerifyCodeCardViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSString *rawPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)verifyCode;
- (void)onTapSendVerifyCodeButton;
- (void)startCountDownIfNeeded;
- (void)countdownTick;
- (void)makeFirstResponder;
- (void).cxx_destruct;

@end
