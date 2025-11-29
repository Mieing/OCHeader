@class MMWebCanvasItemData;
@protocol MMBizCanvasJsApiHandlerDelegate;

@interface MMBizCanvasJsApiHandler : NSObject <PBMessageObserverDelegate>

@property (copy, nonatomic) id /* block */ callbackBlock;
@property (retain, nonatomic) MMWebCanvasItemData *canvasItemData;
@property (weak, nonatomic) id<MMBizCanvasJsApiHandlerDelegate> delegate;

- (void)dealloc;
- (void)setupApiWithJSContext:(id)a0;
- (void)addApi_getInfo:(id)a0;
- (void)addApi_getData:(id)a0;
- (void)addApi_deleteCanvasCard:(id)a0;
- (void)addApi_onItemClick:(id)a0;
- (void)addApi_preloadImage:(id)a0;
- (void)addApi_adRequest:(id)a0;
- (void)onResponseAdRequestCgi:(id)a0;
- (void)addApi_canvasRequest:(id)a0;
- (void)onResponseCanvasRequestCgi:(id)a0;
- (void)callbackWithId:(id)a0 params:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
