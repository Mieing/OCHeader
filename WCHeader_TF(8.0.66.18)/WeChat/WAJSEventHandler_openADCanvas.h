@class NSString, NSDictionary, WCAdvertiseInfo, WCCanvasDynamicDataLoader;

@interface WAJSEventHandler_openADCanvas : WAJSEventHandler_BaseEvent <WCCanvasDynamicDataLoaderDelegate, MMWebViewDelegate, WCCanvasPageViewControllerDelegate, WCAdDynamicCanvasViewControllerDelegate> {
    NSDictionary *_param;
}

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (unsigned long long)getUInt64ForKey:(id)a0 inParams:(id)a1;
- (void)onCanvasServerDataReturn:(id)a0 errorCode:(int)a1 forLoadParams:(id)a2;
- (void)webViewReturn:(id)a0;
- (void)onCloseCanvasPageView;
- (void)onCloseDynamicCanvasPageView;
- (void).cxx_destruct;

@end
