@class NSString, WCOutDialPad, UIButton, WCOutGetCallInfoCgi, NSMutableString, GetWCOCallInfoResponse, UILabel, MMUILabel;

@interface WCOutDialViewController : MMUIViewController <WCOutDialPadDelegate, UIGestureRecognizerDelegate, WCOutCountryCodeDelegate, UIViewControllerAnimatedTransitioning, IWCOutCallExt, WCOutGetCallInfoDelegate> {
    UIButton *m_deleteBtn;
    UIButton *m_countryCodeBtn;
    UILabel *m_countryNameLabel;
    UILabel *m_phoneNumLabel;
    UILabel *m_contactNameLabel;
    WCOutDialPad *m_dialPad;
    BOOL m_isEditingCountryCode;
    NSString *m_countryCodeChosen;
    NSMutableString *m_editingCountryCodeText;
    NSMutableString *m_editingPhoneText;
    NSString *m_defaultInput;
    BOOL needDisMissSelf;
    unsigned long long DialScece;
    BOOL hasUserEditFullNumber;
    BOOL hasCheckNumber;
}

@property (retain, nonatomic) MMUILabel *freeTipsLabel;
@property (retain, nonatomic) WCOutGetCallInfoCgi *getCallinfo;
@property (retain, nonatomic) GetWCOCallInfoResponse *callinfoResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithInput:(id)a0 PhoneNum:(id)a1 DialScece:(unsigned long long)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)initView;
- (void)didPressedButton:(id)a0;
- (void)didLongPressDeleteBtn:(id)a0;
- (void)onShowOperationMenu:(id)a0;
- (void)onCopyInputLabel;
- (void)onPasteToInputLabel;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)appendToInputWithText:(id)a0;
- (void)appendToInputWithNextChar:(id)a0;
- (void)appendToCountryCodeTextWithNextChar:(id)a0;
- (BOOL)checkIsEditingCountryCode:(BOOL)a0;
- (void)beginToEditCountryCode;
- (void)appendToPhoneNumTextWithNextChar:(id)a0;
- (void)removeLastTextFromInput;
- (void)removeLastTextFromCountryCodeText;
- (void)removeLastTextFromPhoneNumText;
- (void)updateCountryCodeAndNeedSave:(BOOL)a0;
- (void)updatePhoneNumLabel;
- (void)checkFreeTipsLabel;
- (void)OnPressedDialPadKeyWithText:(id)a0 andKeyCode:(int)a1;
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)a0;
- (void)chooseCountryCode;
- (void)CountryCodePickerDidPickCountryCode:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animateTransition:(id)a0 fromVC:(id)a1 toVC:(id)a2 fromView:(id)a3 toView:(id)a4;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)OnCheckNumberResp:(unsigned int)a0 RespCountryCode:(id)a1;
- (void)getPackageList;
- (void)GetCallInfoResponse:(int)a0 Request:(id)a1 Response:(id)a2;
- (BOOL)isFreeCallCountry:(id)a0;
- (void).cxx_destruct;

@end
