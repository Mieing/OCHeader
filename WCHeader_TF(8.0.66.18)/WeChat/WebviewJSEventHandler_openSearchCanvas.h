@class NSString, WCCanvasDynamicDataLoader;

@interface WebviewJSEventHandler_openSearchCanvas : WebviewJSEventHandlerBase <WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onUxCanvasDynamicXMLReturn:(id)a0 error:(int)a1 forCanvasId:(id)a2;
- (void).cxx_destruct;

@end
