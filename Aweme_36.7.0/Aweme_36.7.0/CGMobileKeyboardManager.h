@class NSSet, NSString, UIView, CGKeyboardTextInputView;

@interface CGMobileKeyboardManager : CGObject <CGCloudPlayerStatusUpdateMessage, XPlayKeyboardProtocol>

@property (retain, nonatomic) CGKeyboardTextInputView *keyboardInputTextView;
@property (weak, nonatomic) UIView *topView;
@property (nonatomic) BOOL canShowKeyboard;
@property (retain, nonatomic) NSSet *autoSendSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)s_keyboardWillShowNotification:(id)a0;
- (void)s_keyboardWillHideNotification:(id)a0;
- (long long)p_actionIdWithImeOptions:(long long)a0;
- (void)p_hideKeyboard;
- (long long)p_keyboardTypeWithInputType:(long long)a0;
- (long long)p_returnKeyTypeWithImeOptions:(long long)a0;
- (void)sendKeyboardReturnEvent:(long long)a0 text:(id)a1;
- (void)sendKeyboardDeleteEvent;
- (void)p_showKeyboardInputView;
- (void)sendKeyboardKey:(long long)a0 state:(BOOL)a1;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handleTextInputStart:(id)a0;
- (void)handleTextInputShow:(id)a0;
- (void)handleTextInputDestroy:(id)a0;
- (void)handleOrientation:(id)a0;
- (void)handleTextInputWithData:(id)a0;
- (void)_handleOrientation:(id)a0;
- (void)sendKeyboardProtocolVersionIfNeeded;
- (void)sendKeyboardText:(id)a0;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void)showKeyboardWithType:(long long)a0;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)dealloc;

@end
