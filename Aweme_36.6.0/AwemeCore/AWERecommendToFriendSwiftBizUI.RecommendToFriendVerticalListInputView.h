@interface AWERecommendToFriendSwiftBizUI.RecommendToFriendVerticalListInputView : UIView <AWEGrowingTextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputTextViewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inputTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sendButton;
}

- (void)growingTextViewDidChange:(id)a0;
- (void)growingTextViewDidEndEditing:(id)a0;
- (void)growingTextView:(id)a0 willChangeHeight:(float)a1;
- (BOOL)growingTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
