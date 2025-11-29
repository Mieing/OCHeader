@class IESIMGrowingTextView;
@protocol AWEIMTranspondListInputViewControllerDelegate;

@interface AWEIMTranspondListInputViewController : UIViewController <IESIMGrowingTextViewDelegate>

@property (weak, nonatomic) id<AWEIMTranspondListInputViewControllerDelegate> delegate;
@property (retain, nonatomic) IESIMGrowingTextView *textView;

- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (BOOL)growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)handleKeyboardShowNoti:(id)a0;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)clearInputView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)p_removeObservers;
- (void)p_addObservers;

@end
