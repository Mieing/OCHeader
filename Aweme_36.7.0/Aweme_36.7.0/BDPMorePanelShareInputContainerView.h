@class UIView, NSString, BDPUniqueID, UITextView, UIButton, NSMutableArray, NSLayoutConstraint, UIColor;

@interface BDPMorePanelShareInputContainerView : UIView <UITextViewDelegate, UITextPasteDelegate>

@property (copy, nonatomic) NSString *shareText;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) double keyboardInterval;
@property (retain, nonatomic) NSLayoutConstraint *inputViewHeightAnchor;
@property (nonatomic) BOOL focusing;
@property (nonatomic) BOOL keyboardDidShow;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (retain, nonatomic) UIView *emptyView;
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
- (void)setupEmptyView;
- (void)onTapCancel;
- (id)getShareList;
- (id)initWithUniqueID:(id)a0 width:(double)a1;
- (void)updateSendButtonTextWithOnlyOne:(BOOL)a0;
- (double)getNewHeightWithDismiss:(BOOL)a0;
- (void)updateInputHeightWithDismiss:(BOOL)a0;
- (void)setUpKeyboardHeightAndIntervalWithNotification:(id)a0;
- (void)setupBaseContainer;
- (void)onTapSend;
- (double)getButtonWidth;
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
