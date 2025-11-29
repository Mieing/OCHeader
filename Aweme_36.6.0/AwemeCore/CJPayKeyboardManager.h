@class UIView;

@interface CJPayKeyboardManager : NSObject

@property (nonatomic) BOOL keyboardShowIsAllowed;
@property (weak, nonatomic) UIView *currentResponderView;

+ (id)sharedInstance;

- (void)prohibitKeyboardShow;
- (void)permitKeyboardShow;
- (BOOL)recoverFirstResponder;
- (void)delayPermitKeyboardShow:(double)a0;
- (BOOL)resignFirstResponder:(id)a0;
- (BOOL)becomeFirstResponder:(id)a0;
- (BOOL)keyboardShowIsPermited;
- (void)p_delayPermitKeyboardShow:(double)a0;
- (BOOL)resignCurrentFirstResponder;
- (void).cxx_destruct;

@end
