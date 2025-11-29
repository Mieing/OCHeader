@interface WebviewJSEventHandler_openFinderView : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)_finishWithRet:(BOOL)a0 msg:(id)a1 event:(id)a2;
- (id)buildSingleLevelDictionaryWithJsonObj:(id)a0;
- (id)buildDictionaryWithJson:(id)a0;

@end
