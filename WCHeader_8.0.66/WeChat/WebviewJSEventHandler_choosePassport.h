@class NSDictionary, NSString;

@interface WebviewJSEventHandler_choosePassport : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt, WCPayScanPassportViewControllerDelegate>

@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSDictionary *scanDetailMsgMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)asyncHandleCancel;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)report:(unsigned long long)a0;
- (void)reportDetail:(unsigned long long)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)WCPayScanPassportViewController:(id)a0 DidDetectImageArr:(id)a1;
- (void)WCPayScanPassportViewControllerCancel:(id)a0;
- (void)WCPayScanPassportViewControllerFail:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)reportMode:(unsigned long long)a0 action:(unsigned long long)a1;
- (BOOL)isVerticalScreen;
- (void).cxx_destruct;

@end
