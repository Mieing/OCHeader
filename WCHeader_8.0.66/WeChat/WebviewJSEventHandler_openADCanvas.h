@class NSString, WCAdvertiseInfo, WCCanvasDynamicDataLoader;

@interface WebviewJSEventHandler_openADCanvas : WebviewJSEventHandlerBase <WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getUInt64ForKey:(id)a0 inParams:(id)a1;
- (id)getStringForKey:(id)a0 inParams:(id)a1;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onCanvasServerDataReturn:(id)a0 errorCode:(int)a1 forLoadParams:(id)a2;
- (void)endWithOK;
- (void).cxx_destruct;

@end
