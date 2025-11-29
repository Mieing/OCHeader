@class WCDataItem, NSString, WCPasteTextLengthLogic, UITextView, UIImageView, UIButton, UILabel, UIScrollView;
@protocol WCCommentStrangerViewControllerDelegate;

@interface WCCommentStrangerViewController : MMUIViewController <UITextViewDelegate> {
    UIScrollView *m_scrollView;
    UITextView *m_textView;
    UILabel *m_labKF;
    UIButton *m_btnPhone;
    UIImageView *m_textBG;
    float m_fTextBGDefaultHeight;
    float m_fTextViewDefaultHeight;
    float m_fLabelKFDefaultY;
    float m_fBtnPhoneDefaultY;
    double m_fKeyboardHeight;
    WCPasteTextLengthLogic *pastelogic;
    int m_commentWordLimit;
}

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned int source;
@property (nonatomic) BOOL isSendTextOnly;
@property (weak, nonatomic) id<WCCommentStrangerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openOldText;
+ (void)writeOldText:(id)a0;
+ (void)removeOldText;

- (void)setTextViewContent:(id)a0;
- (void)startLoading;
- (void)OnCancel;
- (void)OnReturn;
- (void)doSendMessage;
- (void)onSendMessage:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)textViewDidChange:(id)a0;
- (void)initLeftBtn;
- (void)initRightBtn;
- (void)initTextView;
- (void)keyboardWillShow:(id)a0;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)resizeViews;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
