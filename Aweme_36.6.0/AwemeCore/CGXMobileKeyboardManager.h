@class NSSet, CGXIMEModuleBridge, CGXKeyboardTextInputView, UIView, NSString;
@protocol CGXCloudPlayerSubModuleProtocol;

@interface CGXMobileKeyboardManager : NSObject <CGXKeyboardProtocol, CGXImeProtocol>

@property (retain, nonatomic) CGXKeyboardTextInputView *keyboardInputTextView;
@property (weak, nonatomic) UIView *topView;
@property (nonatomic) BOOL canShowKeyboard;
@property (retain, nonatomic) NSSet *autoSendSet;
@property (retain, nonatomic) CGXIMEModuleBridge *imeModuleBridge;
@property (weak, nonatomic) id<CGXCloudPlayerSubModuleProtocol> subModuleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)s_keyboardWillShowNotification:(id)a0;
- (void)s_keyboardWillHideNotification:(id)a0;
- (long long)p_actionIdWithImeOptions:(long long)a0;
- (void)p_hideKeyboard;
- (long long)p_keyboardTypeWithInputType:(long long)a0;
- (long long)p_returnKeyTypeWithImeOptions:(long long)a0;
- (void)sendKeyboardText:(id)a0 selectionStart:(long long)a1 selectionEnd:(long long)a2;
- (void)sendKeyboardReturnEvent:(long long)a0 text:(id)a1;
- (void)sendKeyboardDeleteEvent;
- (void)p_showKeyboardInputView;
- (void)sendKeyboardKey:(long long)a0 state:(BOOL)a1;
- (void)onCommandEnable:(id)a0 enable:(BOOL)a1;
- (void)onCommandPrepare:(id)a0 inputType:(long long)a1 imeOptions:(long long)a2 hintText:(id)a3 actionLabel:(id)a4 actionId:(long long)a5;
- (void)onCommandShow:(id)a0 currentText:(id)a1 selectionStart:(long long)a2 selectionEnd:(long long)a3;
- (void)onCommandHide:(id)a0;
- (id)initWidthModuleDelegate:(id)a0;
- (void)uninit;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)dealloc;

@end
