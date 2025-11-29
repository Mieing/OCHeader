@class UITextField;

@interface FlutterSecureTextInputView : FlutterTextInputView {
    UITextField *_textField;
}

@property (readonly, retain, nonatomic) UITextField *textField;

- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
