@class MJPublisher, NSString;

@interface WebviewJSEventHandler_openRedPacketCoverComposing : WebviewJSEventHandlerBase <MJShootComposingViewControllerDelegate>

@property (retain, nonatomic) MJPublisher *mjPublisher;
@property (nonatomic) int enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)handleJSEventOnAuthorized:(id)a0;
- (void)handleJSEventForNewPublisher:(id)a0;
- (void)_handleOpenShootComposingAction;
- (void)_handlePreloadAction;
- (void)_handleSDKVersionCheckAction;
- (void)_handleQRCodePreviewAction;
- (void)onSightCameraCancel:(id)a0;
- (void)shootComposingViewController:(id)a0 didFinishUploadRedPacketCDNWithResponseInfo:(id)a1;
- (id)getFromVC;
- (void).cxx_destruct;

@end
