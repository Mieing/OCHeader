@class UIViewController, LiteAppJsApiCallback;

@interface LiteAppJsApiEmoticonStopSelect : LiteAppJsApi {
    LiteAppJsApiCallback *_callBack;
    UIViewController *_controller;
}

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)getEmoticonPanel;
- (void)removeEmoticonPanel;
- (void).cxx_destruct;

@end
