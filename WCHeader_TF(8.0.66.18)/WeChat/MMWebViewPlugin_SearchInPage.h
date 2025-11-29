@class NSString, UITextField, MMTimer, UIView;

@interface MMWebViewPlugin_SearchInPage : MMWebViewPluginBase <UITextFieldDelegate> {
    BOOL _bEnableSearchInPage;
    id /* block */ _inputTextCallbackBlock;
    unsigned long long _maxInputLen;
    UIView *_inputToolBarView;
    UITextField *_inputTextField;
    unsigned long long _currentIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrameInScreen;
    double _fKeyboardHeight;
    double _fKeyboardAnimationDuration;
    long long _iKeyboardAnimationCurve;
    MMTimer *_textChangeCheckTimer;
    NSString *_finishText;
    NSString *_currentText;
    BOOL _bEnableAction;
}

@property (nonatomic) unsigned long long m_uiResultCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)resignResponder;
- (void)resizeInputTextFieldWidth;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)showKeyBoardWithPlaceholder:(id)a0 defaultText:(id)a1 maxTextLen:(unsigned long long)a2 contentOffsetY:(double)a3 callBackBlock:(id /* block */)a4;
- (void)searchInputKeyboardWillHide:(id)a0;
- (void)searchInputKeyboardDidHide:(id)a0;
- (void)searchInputKeyboardWillChangeFrame:(id)a0;
- (void)searchInputKeyboardDidChangeFrame:(id)a0;
- (void)makeInputAccessoryView;
- (void)textChangeTimerCheck;
- (void)doOnceSearchBeforeTimerInvalidate;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldSearchBtnDone:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)searchPrev:(id)a0;
- (void)searchNext:(id)a0;
- (void)onSearchCloseBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
