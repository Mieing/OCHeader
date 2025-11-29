@class WCAdOpenAdCanvasJsLogic, MMLoadingView, NSString;

@interface LiteAppJsApiOpenAdCanvas : LiteAppJsApi <WCAdOpenAdCanvasJsLogicDelegate>

@property (retain, nonatomic) WCAdOpenAdCanvasJsLogic *openAdCanvasJsLogic;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)getViewController;
- (void)onOpenAdCanvasFinish:(BOOL)a0 msg:(id)a1;
- (void)showLoading:(BOOL)a0;
- (void).cxx_destruct;

@end
