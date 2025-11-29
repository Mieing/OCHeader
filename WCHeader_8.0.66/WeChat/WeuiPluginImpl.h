@class NSString, UIViewController, UIView;
@protocol UITextInput;

@interface WeuiPluginImpl : NSObject <FlutterStreamHandler, MMFlutterPlugin> {
    id /* block */ eventSink;
    double lastKeyboardHeight;
    double lastInputAccessoryHeight;
    BOOL isShowKeyboard;
}

@property (nonatomic) long long notificationTime;
@property (nonatomic) int keyboardState;
@property (weak, nonatomic) UIViewController *associateViewController;
@property (weak, nonatomic) UIView<UITextInput> *flutterTextInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

- (id)init;
- (id)onCancelWithArguments:(id)a0;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)registEvent;
- (void)checkValidAndFindTextInput;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onKeyboardDidShow:(id)a0;
- (void)onKeyboardDidHide:(id)a0;
- (void)onKeyboardWillChangeFrame:(id)a0;
- (void)dealloc;
- (id)jsonWithState:(int)a0 keyboardHeight:(double)a1 inputAccessoryHeight:(double)a2 notificationTime:(long long)a3;
- (void)checkIsKeyboardOpen:(id)a0;
- (id)getKeyboardHeight:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void).cxx_destruct;

@end
