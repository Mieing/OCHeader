@class NSString;

@interface CJPayPolicyEntryPluginImpl : NSObject <CJPayPolicyEntryPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (void)injectCert:(id)a0;
- (void)clearCert;
- (void)evaluatePolicy:(long long)a0 localizedReason:(id)a1 withLAcontext:(id)a2 cert:(id)a3 reply:(id /* block */)a4;
- (void)applicationOpenUrl:(id)a0 withPolicy:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)pasteboardSetString:(id)a0 withCert:(id)a1 error:(id *)a2;
- (void)applicationOpenUrl:(id)a0 withCert:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestAccessForMediaType:(id)a0 withCert:(id)a1 completionHandler:(id /* block */)a2;
- (void)startRunningWithCaptureSession:(id)a0 withCert:(id)a1 error:(id *)a2;
- (void)stopRunningWithCaptureSession:(id)a0 withCert:(id)a1 error:(id *)a2;
- (void)requestAlbumAuthorizationWithCert:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAlbumAddOnlyAuthorizationWithCert:(id)a0 completionHandler:(id /* block */)a1;
- (void)openAlbumWithImagePickerCert:(id)a0 phPickerCert:(id)a1 completionHandler:(id /* block */)a2;
- (id)pickerControllerWithImagePickerCert:(id)a0;
- (id)phPickerControllerWithPHPickerCert:(id)a0 selectionLimit:(long long)a1;
- (void)pasteboardSetString:(id)a0 withPolicy:(id)a1 error:(id *)a2;
- (void)requestAccessForMediaType:(id)a0 withPolicy:(id)a1 completionHandler:(id /* block */)a2;
- (void)startRunningWithCaptureSession:(id)a0 withPolicy:(id)a1 error:(id *)a2;
- (void)stopRunningWithCaptureSession:(id)a0 withPolicy:(id)a1 error:(id *)a2;
- (void)requestAlbumAuthorizationWithPolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAlbumAddOnlyAuthorizationWithPolicy:(id)a0 completionHandler:(id /* block */)a1;
- (void)evaluatePolicy:(long long)a0 localizedReason:(id)a1 withLAcontext:(id)a2 withPolicy:(id)a3 reply:(id /* block */)a4;
- (void)openAlbumWithImagePickerPolicy:(id)a0 phPickerPolicy:(id)a1 completionHandler:(id /* block */)a2;
- (id)pickerControllerWithImagePickerPolicy:(id)a0;
- (id)phPickerControllerWithPHPickerPolicy:(id)a0;
- (id)phPickerControllerWithPHPickerPolicy:(id)a0 selectionLimit:(long long)a1;
- (id)p_getTokenCert:(id)a0;
- (id)phPickerControllerWithPHPickerCert:(id)a0;

@end
