@class NSString;

@interface WACanvasDataSampleMgr : NSObject <WACanvasDataSampleMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getCurrentCanvasImage:(id)a0 scaleFactor:(float)a1;
- (id)getCurrentHTMLWebViewImage:(id)a0 scaleFactor:(float)a1;
- (id)getGameServerData:(id)a0;
- (id)getResizedImageByAppId:(id)a0 targetViewId:(int)a1;
- (void)requestReportCanvasSampleData:(id)a0 onSuccess:(id /* block */)a1 onFailure:(id /* block */)a2;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1 onSuccess:(id /* block */)a2 onFailure:(id /* block */)a3;
- (void)onServiceRequestSample:(id)a0 EventInfo:(id)a1 Success:(id /* block */)a2 Failure:(id /* block */)a3 targetViewId:(int)a4 isDebugMode:(BOOL)a5;
- (void)onBeforeQRCodeRecognized:(id)a0;
- (void)onBeforeProfileRedirect:(id)a0;
- (void)onBeforeWAGameExit:(id)a0;
- (void)onAfterWebViewLoad:(id)a0 viewId:(int)a1;

@end
