@interface AWECommentInputViewSwiftImpl.CommentInputViewDispatcher : NSObject <AWETextInputControllerDelegate, AWEGrowingTextViewDelegate> {
    void /* unknown type, empty encoding */ elementList;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ configuration;
}

- (void)textInputDismissCompletion;
- (void)textInputValueChanged:(id)a0;
- (void)textInputDidAddUser:(id)a0;
- (void)textInputDidDeleteUser:(id)a0;
- (void)textInputDidClearInputData:(id)a0;
- (void)textInput:(id)a0 didDeleteTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)textInputDidDeleteDuetChain:(id)a0;
- (void)textInputDidExceedMaxLength:(id)a0;
- (void)textInputDidDeleteCommentChain:(id)a0;
- (void)textInputDidExceedMaxUserCount:(id)a0;
- (void)textInputDidNeedClosingSuggestion:(id)a0;
- (void)textInputDidStartLoadingSuggestions:(id)a0;
- (void)textInput:(id)a0 didReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withText:(id)a2;
- (void)textInput:(id)a0 didRequestSuggestion:(id)a1 hitBlockList:(BOOL)a2;
- (double)textInputCurrentAwemeDuration:(id)a0;
- (BOOL)textInputShouldMatchTimeExtra:(id)a0;
- (void)growingTextViewDidChange:(id)a0;
- (void)growingTextViewDidEndEditing:(id)a0;
- (void)growingTextViewDidBeginEditing:(id)a0;
- (void)growingTextViewDidChangeSelection:(id)a0;
- (void)growingTextView:(id)a0 didChangeHeight:(float)a1;
- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (id)growingTextView:(id)a0 itemsForDrag:(id)a1;
- (BOOL)growingTextView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)growingTextViewShouldEndEditing:(id)a0;
- (BOOL)growingTextViewShouldBeginEditing:(id)a0;
- (BOOL)growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (BOOL)growingTextViewHasEmptyTextShouldChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
