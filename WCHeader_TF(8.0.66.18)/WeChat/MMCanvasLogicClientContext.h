@class MMClientJsApiHandler, MMCanvasLogicClientContextParams, NSString, MMCanvasJsApiHandler, MMBizCanvasJsApiHandler, MMPopupJsApiHandler;
@protocol MMCanvasLogicClientContextDelegate;

@interface MMCanvasLogicClientContext : MMWebJSContext <MMClientJsApiHandlerDelegate, MMCanvasJsApiHandlerViewDelegate, MMPopupJsApiHandlerDelegate, MMBizCanvasJsApiHandlerDelegate>

@property (retain, nonatomic) MMClientJsApiHandler *clientJsApiHandler;
@property (retain, nonatomic) MMCanvasJsApiHandler *canvasJsApiHandler;
@property (retain, nonatomic) MMPopupJsApiHandler *popupJsApiHandler;
@property (retain, nonatomic) MMBizCanvasJsApiHandler *bizCanvasJsApiHandler;
@property (weak, nonatomic) id<MMCanvasLogicClientContextDelegate> contextDelegate;
@property (retain, nonatomic) MMCanvasLogicClientContextParams *params;
@property (nonatomic) unsigned long long preloadTs;
@property (nonatomic) unsigned long long launchTs;
@property (readonly, nonatomic) NSString *canvasId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJVM:(id)a0 name:(id)a1 params:(id)a2 contextDelegate:(id)a3 workQueue:(id)a4;
- (void)internalInit;
- (void)dealloc;
- (void)updateViewDelegate:(id)a0;
- (void)resetDelegateAndHandler;
- (id)viewDelegate;
- (void)updateDeleteHandler:(id /* block */)a0;
- (void)callbackWithId:(id)a0 params:(id)a1;
- (void)callbackWithId:(id)a0 eventInfo:(id)a1;
- (id)getCurrentWebviewViewController;
- (double)getCanvasViewWidth;
- (double)getCanvasViewHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewVisibleContainerHeight;
- (BOOL)isCanvasViewAppear;
- (BOOL)isCanvasViewInBackground;
- (id)onGetLayoutDataForCanvasId:(id)a0;
- (void)onSaveCanvasHeight:(double)a0;
- (void)onSaveLayoutData:(id)a0 forCanvasId:(id)a1;
- (long long)onGetFPS:(id)a0;
- (void)popUpCanvas:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hexColor:(id)a2 mode:(unsigned int)a3 closeBlock:(id /* block */)a4;
- (void)closePopupCanvas:(id)a0;
- (void)callbackPopupCanvasClose:(id)a0 callbackId:(id)a1;
- (id)onGetInfoWithKey:(id)a0;
- (void)onItemClick:(unsigned int)a0;
- (void)onPreloadImageWithUrl:(id)a0;
- (void)onDeleteCanvasCard:(id)a0;
- (void).cxx_destruct;

@end
