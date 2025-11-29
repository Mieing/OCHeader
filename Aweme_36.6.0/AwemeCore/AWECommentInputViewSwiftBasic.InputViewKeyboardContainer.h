@interface AWECommentInputViewSwiftBasic.InputViewKeyboardContainer : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyboardContainer;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ keyboardInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ bizDelegate;
    void /* unknown type, empty encoding */ isHorizontalScreen;
}

- (void)keyboardWillShowWithNotice:(id)a0;
- (void)keyboardWillHideWithNotice:(id)a0;
- (void)keyboardDidChangeFrameWithNotice:(id)a0;
- (void)keyboardDidHideWithNotice:(id)a0;
- (void)keyboardDidShowWithNotice:(id)a0;
- (void)keyboardWillChangeFrameWithNotice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
