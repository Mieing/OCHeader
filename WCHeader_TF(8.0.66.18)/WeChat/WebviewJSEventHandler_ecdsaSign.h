@interface WebviewJSEventHandler_ecdsaSign : WebviewJSEventHandlerBase

+ (id)signWithUrl:(id)a0 shortPrefix:(id)a1 signText:(id)a2;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)completeWithMessage:(id)a0 success:(BOOL)a1 dict:(id)a2 event:(id)a3;

@end
