@class NSString, BrandOpenSpecificViewHandler;

@interface WebviewJSEventHandler_openSpecificView : WebviewJSEventHandlerBase <VerifyPhoneDelegate, BrandOpenSpecificViewHandlerDelegate> {
    BrandOpenSpecificViewHandler *_openSpecificViewHandler;
    BOOL _isDismissCurrentViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)routeEnableTest;
- (BOOL)shouldDismissCurrentViewController;
- (id)getCurrentController;
- (void).cxx_destruct;

@end
