@class NSString;

@interface WAJSEventHandler_openQRCode : WAJSEventHandler_BaseEvent <CameraScanUIDelegate>

@property (nonatomic) BOOL bGotScanResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)a0;
- (void)onCameraScanViewControllerDidBePoped;

@end
