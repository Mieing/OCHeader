@class NSString;
@protocol CGXImeProtocol;

@interface CGXIMEModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeImeModule_;
    struct ImeModuleListenerBridge { void /* function */ **x0; id x1; } *m_listenerBridge;
}

@property (weak, nonatomic) id<CGXImeProtocol> listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerIMEListener:(id)a0;
- (void)unregisterIMEListener;
- (void)sendTextInputEvent:(id)a0 actionId:(long long)a1 selectionStart:(long long)a2 selectionEnd:(long long)a3 keyCode:(long long)a4 keyAction:(long long)a5;
- (void)sendKeyBoardEvent:(long long)a0 down:(BOOL)a1;
- (void)onCommandEnable:(id)a0 enable:(BOOL)a1;
- (void)onCommandPrepare:(id)a0 inputType:(long long)a1 imeOptions:(long long)a2 hintText:(id)a3 actionLabel:(id)a4 actionId:(long long)a5;
- (void)onCommandShow:(id)a0 currentText:(id)a1 selectionStart:(long long)a2 selectionEnd:(long long)a3;
- (void)onCommandHide:(id)a0;
- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void).cxx_destruct;

@end
