@interface IESLiveKeyboardManager : NSObject

@property (nonatomic) BOOL keyboardShow;
@property (readonly, nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible;

+ (id)defaultManager;

- (id)_getKeyboardViewFromWindow:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (id)init;
- (void)keyboardWillHide:(id)a0;
- (id)keyboardView;
- (double)_systemVersion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyboardFrame;

@end
