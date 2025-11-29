@class NSString, CJPayCardUpdateModel, CJPayBindCardScrollView, UIView, CJPayCardUpdateView;
@protocol CJPayTrackerProtocol;

@interface CJPayCardUpdateViewController : CJPayFullPageBaseViewController <CJPayCustomTextFieldContainerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) CJPayBindCardScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayCardUpdateView *cardUpdateView;
@property (retain, nonatomic) CJPayCardUpdateModel *cardUpdateModel;
@property (nonatomic) BOOL shouldHandleInputTracker;
@property (copy, nonatomic) id /* block */ cardUpdateSuccessCompletion;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)navigationHeight;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)textFieldWillClear:(id)a0;
- (void)textFieldContentChange:(id)a0 textContainer:(id)a1;
- (void)textFieldEndEdit:(id)a0;
- (id)p_engimaImpl;
- (void)p_endEdit;
- (id)p_buildULBDPaySendSMSBaseParam;
- (id)p_buildULSMSBizParam;
- (void)p_showSingleButtonAlertWithResponse:(id)a0;
- (void)p_sendSMS;
- (BOOL)p_isPhoneNumInvalid;
- (id)initWithCardUpdateModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)back;

@end
