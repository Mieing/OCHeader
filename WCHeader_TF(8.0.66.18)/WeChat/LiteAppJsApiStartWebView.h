@class NSString;

@interface LiteAppJsApiStartWebView : LiteAppJsApi <MMWebViewDelegate> {
    id /* block */ _callbackBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)invokeJsApiImpl:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)delayDoAction;
- (void)webViewReturn:(id)a0;
- (void)ShowWebViewControllerWithType:(unsigned long long)a0 andWebViewVC:(id)a1;
- (void).cxx_destruct;

@end
