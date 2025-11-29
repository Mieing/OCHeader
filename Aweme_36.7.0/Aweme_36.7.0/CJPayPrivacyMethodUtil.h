@interface CJPayPrivacyMethodUtil : NSObject

+ (void)injectCert:(id)a0;
+ (void)clearCert;
+ (void)applicationOpenUrl:(id)a0 withPolicy:(id)a1 completionBlock:(id /* block */)a2;
+ (void)applicationOpenUrl:(id)a0 withPolicy:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
+ (void)applicationOpenUrl:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
+ (void)pasteboardSetString:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 completionBlock:(id /* block */)a3;
+ (id)pickerControllerWithImagePickerPolicy:(id)a0 bridgeCommand:(id)a1;
+ (id)phPickerControllerWithImagePickerPolicy:(id)a0 bridgeCommand:(id)a1 selectionLimit:(long long)a2;
+ (void)requestAccessForMediaType:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 completionHandler:(id /* block */)a3;
+ (void)requestAlbumAddOnlyAuthorizationWithPolicy:(id)a0 bridgeCommand:(id)a1 completionHandler:(id /* block */)a2;
+ (void)requestAlbumAuthorizationWithPolicy:(id)a0 bridgeCommand:(id)a1 completionHandler:(id /* block */)a2;
+ (void)startRunningWithCaptureSession:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 completionBlock:(id /* block */)a3;
+ (void)stopRunningWithCaptureSession:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 completionBlock:(id /* block */)a3;
+ (void)openAlbumWithImagePickerPolicy:(id)a0 phPickerPolicy:(id)a1 bridgeCommand:(id)a2 completionHandler:(id /* block */)a3;
+ (void)evaluatePolicy:(long long)a0 localizedReason:(id)a1 withLAcontext:(id)a2 withPolicy:(id)a3 bridgeCommand:(id)a4 reply:(id /* block */)a5;
+ (id)phPickerControllerWithImagePickerPolicy:(id)a0 bridgeCommand:(id)a1;

@end
