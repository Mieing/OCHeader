@class NSDictionary, UITextView, NSString;

@interface CGPCKeyboardManager : CGObject <UITextViewDelegate, CGCloudPlayerStatusUpdateMessage, XPlayKeyboardProtocol>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSDictionary *keymap;
@property (retain, nonatomic) NSDictionary *shiftKeymap;
@property (copy, nonatomic) NSString *sendText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)sendKeyboardKey:(long long)a0 state:(BOOL)a1;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (long long)keyboardTypeFromXPlayType:(long long)a0;
- (long long)autocorrectionTypeWithXPlayType:(long long)a0;
- (void)sendKeyboardKeyWithReplacementText:(id)a0;
- (void)sendKeyboardText:(id)a0;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void)showKeyboardWithType:(long long)a0;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)dealloc;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
