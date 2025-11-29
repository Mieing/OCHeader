@class NSString, NSAttributedString, NSArray;

@interface FlowInputBizUI.BasicInputTextView : FlowUIKit.FlowDynamicHeightTextView {
    void /* unknown type, empty encoding */ placeholderView;
    void /* unknown type, empty encoding */ textLineHeight;
    void /* unknown type, empty encoding */ textAttributes;
    void /* unknown type, empty encoding */ placeholderAttributes;
    void /* unknown type, empty encoding */ menuShowBlock;
    void /* unknown type, empty encoding */ menuClickBlock;
    void /* unknown type, empty encoding */ commandEnterBlock;
    void /* unknown type, empty encoding */ filePasteBlock;
    void /* unknown type, empty encoding */ batchFileDropBlock;
    void /* unknown type, empty encoding */ canPasteFileBlock;
    void /* unknown type, empty encoding */ canDropFileBlock;
    void /* unknown type, empty encoding */ canPasteImageBlock;
    void /* unknown type, empty encoding */ pasteTextTrackBlock;
    void /* unknown type, empty encoding */ keepFirstResponderForAWhile;
    void /* unknown type, empty encoding */ notWakeupKeyboard;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) BOOL canResignFirstResponder;

- (void)menuWillShow;
- (void)byNewline;
- (void)textViewTextDidChanged:(id)a0;
- (void)commandEnterPressed:(id)a0;
- (void)shiftEnterPressed:(id)a0;
- (void)optionEnterPressed:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)paste:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
