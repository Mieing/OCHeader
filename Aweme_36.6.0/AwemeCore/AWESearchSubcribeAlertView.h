@class AWESearchSubcribeAlertConfiguration, AWESearchSubcribeTipsView, NSString, AWESearchSubcribeInputView;

@interface AWESearchSubcribeAlertView : UIView <UITextFieldDelegate>

@property (nonatomic) BOOL hasInputText;
@property (retain, nonatomic) AWESearchSubcribeTipsView *tipsView;
@property (retain, nonatomic) AWESearchSubcribeInputView *inputView;
@property (retain, nonatomic) AWESearchSubcribeAlertConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInputView;
- (void)addNotification;
- (void)removeNotification;
- (void)handleKeyboardWillShowNotification:(id)a0;
- (void)handleKeyboardWillHideNotification:(id)a0;
- (void)clickConfirm;
- (void)clickCancelFromTips;
- (void)clickSubscribe;
- (void)clickCancelFromInput;
- (void)dismissWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)show;

@end
