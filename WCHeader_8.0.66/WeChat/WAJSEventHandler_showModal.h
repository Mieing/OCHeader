@class NSString, WAWebViewPlugin_NativeView, WAWebViewPlugin_InputKeyboard;

@interface WAJSEventHandler_showModal : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>

@property (weak, nonatomic) WAWebViewPlugin_InputKeyboard *keyboardPlugin;
@property (weak, nonatomic) WAWebViewPlugin_NativeView *nativeInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
