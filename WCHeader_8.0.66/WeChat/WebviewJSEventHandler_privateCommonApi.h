@class NSString, PrivateCommonApiHandler;

@interface WebviewJSEventHandler_privateCommonApi : WebviewJSEventHandlerBase <PrivateCommonApiHandlerDelegate> {
    PrivateCommonApiHandler *_handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidPrivateUrl:(id)a0;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)handleCommonApiWithResult:(unsigned long long)a0 params:(id)a1;
- (id)getViewController;
- (Class)handlerClassForOpCode:(id)a0;
- (BOOL)syncHanleWithOpcode:(id)a0 params:(id)a1;
- (void)handleAccessLastUser;
- (void)handleAccessSystemInfo;
- (void).cxx_destruct;

@end
