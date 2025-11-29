@interface AWEKeyboardAnimationManager : NSObject

+ (double)keyboardOffsetForView:(id)a0 keyboardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)observeKeyboardWithWillShowAction:(id /* block */)a0 willHideAction:(id /* block */)a1;
+ (id)observeKeyboardUserInfoWithWillShowAction:(id /* block */)a0 willHideAction:(id /* block */)a1;

@end
