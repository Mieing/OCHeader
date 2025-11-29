@class NSTimer, NSString, UITapGestureRecognizer, UIView, UIButton, NSDictionary, UITextField, NSMutableSet, UILabel;

@interface AWEOPAuthVerifyCodeView : AWEOPBasePopupView

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *textBgView;
@property (retain, nonatomic) UITextField *codetextField;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UILabel *resultTipLabel;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) UITapGestureRecognizer *customTapRecognizer;
@property (retain, nonatomic) NSTimer *reSendTimer;
@property (copy, nonatomic) NSString *currentCodeText;
@property (retain, nonatomic) NSMutableSet *trackedEvents;
@property (copy, nonatomic) NSString *mobileString;
@property (copy, nonatomic) NSString *clientKey;
@property (retain, nonatomic) NSDictionary *extraInfoDict;
@property (copy, nonatomic) id /* block */ onClickOKBlock;
@property (copy, nonatomic) id /* block */ onFinishVerifyBlock;
@property (copy, nonatomic) id /* block */ onTrackBlock;

- (void)stopCountDown;
- (void)addNotifications;
- (void)showSuccess;
- (void)onClickCloseButton:(id)a0;
- (void)onClickOKButton:(id)a0;
- (void)addCustomBackgroundTapAction;
- (void)onTapBaseBackgroundView;
- (void)onClickSendButton:(id)a0;
- (void)showOrHideRotateAnimation:(BOOL)a0;
- (void)showErrorWithText:(id)a0;
- (void)handleResultWithError:(id)a0 completion:(id /* block */)a1;
- (void)beginCountDown:(double)a0;
- (void)onClickEndEditingButton:(id)a0;
- (void)setupPopupSubviews;
- (void)sendSMS;
- (void)closeViewFromAPI;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)dismissKeyboard;
- (void)keyboardWillHide:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showInView:(id)a0;
- (void)textFieldDidChange:(id)a0;

@end
