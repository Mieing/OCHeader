@interface AWEStudioEditImpl.ModernTextEditViewController : UIViewController <AWEStudioPageProtocol, ACCTextStickerInputControllerDelegate, UITextViewDelegate> {
    void /* unknown type, empty encoding */ keyboardHeight;
    void /* unknown type, empty encoding */ publishModel;
    void /* unknown type, empty encoding */ enterType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneStyle;
    void /* unknown type, empty encoding */ inputController;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ importPlaceholderText;
    void /* unknown type, empty encoding */ customTransitionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textEditContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomNextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideView;
    void /* unknown type, empty encoding */ keyboardBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolTextView;
    void /* unknown type, empty encoding */ hasTrackInputText;
    void /* unknown type, empty encoding */ skipBecomeFirstResponder;
    void /* unknown type, empty encoding */ inactivityTimer;
    void /* unknown type, empty encoding */ autoSaveTimer;
    void /* unknown type, empty encoding */ timeoutInterval;
    void /* unknown type, empty encoding */ textViewLines;
    void /* unknown type, empty encoding */ stayAlert;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textCountLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableNextUIOpt;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableInputGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_socialToolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeholderIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeholderLabel;
}

- (id)currentPagePublishViewModel;
- (void)textStickerInputController:(id)a0 didUpdateSearchStatus:(BOOL)a1 Keyword:(id)a2 searchType:(unsigned long long)a3;
- (void)textStickerInputController:(id)a0 onExtraInfoDidChanged:(id)a1;
- (void)textStickerInputController:(id)a0 textView:(id)a1 onReplaceText:(id)a2 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)keyboardDidShow:(id)a0;

@end
