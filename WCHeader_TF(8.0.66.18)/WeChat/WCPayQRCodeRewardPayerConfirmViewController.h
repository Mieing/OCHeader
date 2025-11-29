@class UIButton, MMTextView, NSString;
@protocol WCPayQRCodeRewardPayerConfirmViewControllerDelegate;

@interface WCPayQRCodeRewardPayerConfirmViewController : WCPayBaseViewController <UITextViewDelegate>

@property (weak, nonatomic) id<WCPayQRCodeRewardPayerConfirmViewControllerDelegate> delegate;
@property (retain, nonatomic) MMTextView *payerCommentTextView;
@property (retain, nonatomic) UIButton *checkBoxButton;
@property (nonatomic) BOOL bIsCheckBoxSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)leftBarButtonClick;
- (void)confirmBtnClick;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)checkBoxBtnClick;
- (void).cxx_destruct;

@end
