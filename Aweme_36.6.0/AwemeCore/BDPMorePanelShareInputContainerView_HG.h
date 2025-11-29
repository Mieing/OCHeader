@class UIColor, NSString, UITextView, NSMutableArray, BDPUniqueID, UIButton;

@interface BDPMorePanelShareInputContainerView_HG : UIView <UITextViewDelegate, UITextPasteDelegate>

@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) NSString *shareText;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double keyboardInterval;
@property (nonatomic) BOOL focusing;
@property (nonatomic) BOOL keyboardDidShow;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (retain, nonatomic) UITextView *inputView;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableArray *selectedList;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ resignCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addKeyboardObserver;
- (void)setupInputView;
- (void)onTapCancel;
- (id)getShareList;
- (void)updateSendButtonTextWithOnlyOne:(BOOL)a0;
- (void)updateInputHeightWithDismiss:(BOOL)a0;
- (id)initWithUniqueID:(id)a0 width:(double)a1 isLandscape:(BOOL)a2;
- (double)getInputViewUpDistance;
- (BOOL)shouldDismissInputView;
- (void)setUpKeyboardHeightAndIntervalWithNotification:(id)a0;
- (void)setupBaseContainer;
- (void)onTapSend;
- (double)getButtonWidth;
- (double)getInputHeight;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)keyboardDidShow:(id)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)setupUI;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)setupSendButton;
- (void)setupCancelButton;

@end
