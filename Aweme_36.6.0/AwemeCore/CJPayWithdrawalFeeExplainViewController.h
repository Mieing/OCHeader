@class UITextView, CJPayStyleButton, CJPayButton, CJPayFeeQueryResponse, UILabel, NSString;
@protocol CJPayTrackerProtocol;

@interface CJPayWithdrawalFeeExplainViewController : CJPayHalfPageBaseViewController <UITextViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) UITextView *explanationTextView;
@property (retain, nonatomic) CJPayFeeQueryResponse *response;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_confirmButtonClicked;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (id)initWithFeeQueryResponse:(id)a0;
- (void)p_setupContent;
- (void)p_openQuotaPage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)textView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (double)containerHeight;

@end
