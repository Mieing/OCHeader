@class MMLoadingView, WCAdDynamicCanvasPageInfo, NSString, WCCanvasDynamicDataLoader;

@interface LiteAppJsApiAdBase : LiteAppJsApi <WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) MMLoadingView *loadingView;
@property (readonly, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getViewController;
- (id)getNavigationController;
- (id)getDynamicCanvasViewController;
- (id)getDynamicCanvasLogic;
- (void)showLoading:(BOOL)a0;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)success:(id)a0;
- (void)fail:(id)a0;
- (void).cxx_destruct;

@end
