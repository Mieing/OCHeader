@interface AWECommentInputViewSwiftImpl.CommentInputViewEmojiKeyboard : AWECommentInputViewSwiftImpl.CommentInputViewBaseKeyboard <AWEPadUIAdaptionViewTransitionObserver, AWEEmoticonKeyboardHelperDelegate> {
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ initialHeight;
    void /* unknown type, empty encoding */ titleContent;
    void /* unknown type, empty encoding */ ratingContent;
    void /* unknown type, empty encoding */ subElements;
    void /* unknown type, empty encoding */ $__lazy_storage_$_creationModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonView;
}

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (void)emoticonKeyboardSendButtonClicked:(id)a0;
- (void)emoticonKeyboardDidTapSearchItem:(id)a0;
- (void)emoticonKeyboard:(id)a0 didSelectSticker:(id)a1 selectedView:(id)a2;
- (BOOL)needUpdateTypingAttributes;
- (void)singleBlockTapWithGes:(id)a0;
- (void)handleEmoticonThemeChanged;
- (void).cxx_destruct;
- (void)dealloc;

@end
