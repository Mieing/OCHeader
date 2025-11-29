@class NSString;

@interface WebviewJSEventHandler_chooseIdCard : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt, MMDetectIDCardViewControllerDelegate>

@property (nonatomic) unsigned long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)asyncHandleCancel;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMDetectIDCardViewController:(id)a0 DidDetectIDCard:(id)a1;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)reportMode:(unsigned long long)a0 action:(unsigned long long)a1;

@end
