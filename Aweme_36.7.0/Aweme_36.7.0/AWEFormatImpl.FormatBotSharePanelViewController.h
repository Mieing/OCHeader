@interface AWEFormatImpl.FormatBotSharePanelViewController : UIViewController <UITextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ estimateHeight;
    void /* unknown type, empty encoding */ _realContentHeight;
    void /* unknown type, empty encoding */ lrInset;
    void /* unknown type, empty encoding */ bottomInset;
    void /* unknown type, empty encoding */ defaultContactHeight;
    void /* unknown type, empty encoding */ topContainer;
    void /* unknown type, empty encoding */ shareLabel;
    void /* unknown type, empty encoding */ separateLine;
    void /* unknown type, empty encoding */ inputTextView;
    void /* unknown type, empty encoding */ sendButton;
    void /* unknown type, empty encoding */ contactLoadingView;
    void /* unknown type, empty encoding */ contactContainer;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ asyncGestures;
    void /* unknown type, empty encoding */ contactViewHeightConstraint;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)sendButtonClick;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
