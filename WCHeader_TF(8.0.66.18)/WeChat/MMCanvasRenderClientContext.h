@class NSString, MMCanvasJsApiHandler, MMCanvasRenderClientContextParams;
@protocol MMCanvasRenderClientContextDelegate;

@interface MMCanvasRenderClientContext : MMWebJSContext <MMCanvasJsApiHandlerViewDelegate>

@property (copy, nonatomic) NSString *canvasId;
@property (weak, nonatomic) id<MMCanvasRenderClientContextDelegate> delegate;
@property (retain, nonatomic) MMCanvasJsApiHandler *canvasJsApiHandler;
@property (retain, nonatomic) MMCanvasRenderClientContextParams *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJVM:(id)a0 name:(id)a1 params:(id)a2;
- (void)internalInit;
- (void)dealloc;
- (id)contextDelegate;
- (id)viewDelegate;
- (void)callbackWithId:(id)a0 params:(id)a1;
- (double)getCanvasViewWidth;
- (double)getCanvasViewHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewVisibleContainerHeight;
- (BOOL)isCanvasViewAppear;
- (BOOL)isCanvasViewInBackground;
- (id)onGetLayoutDataForCanvasId:(id)a0;
- (void)onSaveLayoutData:(id)a0 forCanvasId:(id)a1;
- (void)onSaveCanvasHeight:(double)a0;
- (id)getJsCanvas;
- (long long)onGetFPS:(id)a0;
- (void).cxx_destruct;

@end
