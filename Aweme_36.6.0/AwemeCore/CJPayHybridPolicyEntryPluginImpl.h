@class NSString, CJPayPolicyEntryPluginImpl;

@interface CJPayHybridPolicyEntryPluginImpl : NSObject <CJPayHybridPolicyEntryPlugin>

@property (retain, nonatomic) CJPayPolicyEntryPluginImpl *basePluginImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (void)applicationOpenUrl:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (id)pickerControllerWithImagePickerPolicy:(id)a0 bridgeCommand:(id)a1;
- (void)requestAccessForMediaType:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestAlbumAddOnlyAuthorizationWithPolicy:(id)a0 bridgeCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAlbumAuthorizationWithPolicy:(id)a0 bridgeCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)openAlbumWithImagePickerPolicy:(id)a0 phPickerPolicy:(id)a1 bridgeCommand:(id)a2 completionHandler:(id /* block */)a3;
- (void)pasteboardSetString:(id)a0 bridgeCommand:(id)a1 withPolicy:(id)a2 error:(id *)a3;
- (void)startRunningWithCaptureSession:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 error:(id *)a3;
- (void)stopRunningWithCaptureSession:(id)a0 withPolicy:(id)a1 bridgeCommand:(id)a2 error:(id *)a3;
- (void)evaluatePolicy:(long long)a0 localizedReason:(id)a1 withLAcontext:(id)a2 withPolicy:(id)a3 bridgeCommand:(id)a4 reply:(id /* block */)a5;
- (id)phPickerControllerWithPHPickerPolicy:(id)a0 bridgeCommand:(id)a1;
- (id)phPickerControllerWithPHPickerPolicy:(id)a0 bridgeCommand:(id)a1 selectionLimit:(long long)a2;
- (id)p_getTokenCert:(id)a0 bridgeCommand:(id)a1;
- (void).cxx_destruct;

@end
