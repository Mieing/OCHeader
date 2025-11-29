@class AWEUserLoginBaseViewModel, AWEUserSendCodeModel, NSTimer, UIButton;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginSMSResendCodeView : UIView

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserSendCodeModel *codeModel;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL isReSendCode;
@property (nonatomic) long long reSendCodeCount;
@property (retain, nonatomic) NSTimer *countDownTimer;
@property (nonatomic) long long curCountDown;

- (void)setRemainTime:(unsigned long long)a0;
- (void)countDownAction:(id)a0;
- (void)setupUIForViewModel;
- (void)bindUIForViewModel;
- (void)setupUIForCodeModel;
- (void)bindUIForCodeModel;
- (void)setCountDownAndTimer:(long long)a0 max:(long long)a1;
- (void)updateCountDownForCodeModel;
- (void)removeButtonWidthConstraints;
- (void)addButtonWidthConstraintsForCountDown;
- (id)initWithCodeModel:(id)a0;
- (void)updateCodeModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
