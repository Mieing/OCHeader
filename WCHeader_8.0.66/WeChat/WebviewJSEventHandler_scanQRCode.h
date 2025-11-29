@class NSString;

@interface WebviewJSEventHandler_scanQRCode : WebviewJSEventHandlerBase <CameraScanUIDelegate> {
    BOOL _bGotScanResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)a0;
- (void)onCameraScanViewControllerDidBePoped;

@end
