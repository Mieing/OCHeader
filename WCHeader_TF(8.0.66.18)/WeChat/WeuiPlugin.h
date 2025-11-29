@class NSString;

@interface WeuiPlugin : NSObject <FlutterStreamHandler, FlutterPlugin> {
    id /* block */ eventSink;
    int lastKeyboardHeight;
    BOOL isShowKeyboard;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (id)onCancelWithArguments:(id)a0;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (void)registEvent;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onKeyboardDidShow:(id)a0;
- (void)dealloc;
- (id)showKeyboard:(BOOL)a0 keyboardHeight:(double)a1;
- (void)checkIsKeyboardOpen:(id)a0;
- (id)getKeyboardHeight:(id)a0;
- (void).cxx_destruct;

@end
