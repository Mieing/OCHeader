@class NSString;

@interface WebviewJSEventHandler_openUrlWithExtraWebview : WebviewJSEventHandlerBase <MMWebViewDelegate, MMWebPageSheetDelegate> {
    id /* block */ _callbackBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getGlobalHasShow;
+ (void)setGlobalHasShow:(BOOL)a0;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)backgroundTaskForKey:(id)a0;
- (id)csPreInjectJSExtObjFromParams:(id)a0;
- (id)genNewWebExtraInfoFromParams:(id)a0 toUrl:(id)a1 csPreInjectJSExtObj:(id)a2;
- (id)genNewWebConfigFromParams:(id)a0;
- (id)pageSheetConfigFromParams:(id)a0;
- (id)currentPageSheet;
- (id)pageSheetAdapterPlugin;
- (void)delayDoAction;
- (void)webViewReturn:(id)a0;
- (void)ShowWebViewControllerWithType:(unsigned long long)a0 andWebViewVC:(id)a1;
- (void)webPageSheetDidDismiss:(id)a0;
- (void).cxx_destruct;

@end
