@interface GameCenterJsApiBase : WebviewJSEventHandlerBase

- (void)event:(id)a0 endWithErrorDesc:(id)a1;
- (void)event:(id)a0 successEndWithResult:(id)a1;
- (id)getPkgContentInfo:(id)a0 withContents:(BOOL)a1 ridInfoSet:(id)a2;

@end
