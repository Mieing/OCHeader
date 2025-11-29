@interface BDPSensitiveAPI_HG : NSObject

+ (id)calendarsForEntityType:(unsigned long long)a0 type:(unsigned long long)a1 eventStore:(id)a2 error:(id *)a3;
+ (BOOL)saveEvent:(id)a0 type:(unsigned long long)a1 span:(long long)a2 eventStore:(id)a3 error:(id *)a4;
+ (long long)authorizationStatusForEntityType:(unsigned long long)a0 type:(unsigned long long)a1 error:(id *)a2;
+ (void)requestAccessToEntityType:(unsigned long long)a0 type:(unsigned long long)a1 eventStore:(id)a2 completion:(id /* block */)a3;
+ (void)requestAccessCameraWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
+ (void)requestAlbumAuthorization:(unsigned long long)a0 completionHandler:(id /* block */)a1 forAccessLevel:(long long)a2;
+ (void)requestRecordPermissionWithType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)openURL:(id)a0 type:(unsigned long long)a1;
+ (void)setClipboard:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
+ (void)getClipboardWithType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (id)initSKStoreWithType:(unsigned long long)a0;
+ (void)requestRecordPermissionWithType:(unsigned long long)a0 audioSession:(id)a1 completion:(id /* block */)a2;
+ (void)openURL:(id)a0 type:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)startRunningWithCaptureSession:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
+ (void)stopRunningWithCaptureSession:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
+ (unsigned long long)getHeliumCameraTypeForHG;
+ (unsigned long long)getHeliumCameraTypeForOther;
+ (void)requestAccessMicrophoneWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
+ (int)startAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 type:(unsigned long long)a1 error:(id *)a2;
+ (int)stopAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 type:(unsigned long long)a1 error:(id *)a2;
+ (unsigned long long)getHeliumAudioTypeForHG;
+ (unsigned long long)getHeliumAudioTypeForOther;
+ (void)setClipboard:(id)a0 type:(unsigned long long)a1;

@end
