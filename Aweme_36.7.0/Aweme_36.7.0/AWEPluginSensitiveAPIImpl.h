@class NSString;

@interface AWEPluginSensitiveAPIImpl : NSObject <BDPSensitiveAPIPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getCertWithType:(unsigned long long)a0;
- (void)bdp_requestAccessCameraWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)bdp_startRunningWithCaptureSession:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (BOOL)bdp_stopRunningWithCaptureSession:(id)a0 type:(unsigned long long)a1 error:(id *)a2;
- (void)bdp_requestAccessMicrophoneWithType:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (int)bdp_startAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 type:(unsigned long long)a1 error:(id *)a2;
- (int)bdp_stopAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 type:(unsigned long long)a1 error:(id *)a2;
- (void)bdp_requestRecordPermissionWithType:(unsigned long long)a0 audioSession:(id)a1 completion:(id /* block */)a2;
- (void)bdp_getClipboardWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)bdp_setClipboardWithType:(unsigned long long)a0 content:(id)a1 error:(id *)a2;
- (void)bdp_openURL:(id)a0 type:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)bdp_initSKStoreWithType:(unsigned long long)a0;
- (void)bdp_requestAlbumAuthorization:(unsigned long long)a0 completionHandler:(id /* block */)a1 forAccessLevel:(long long)a2;
- (id)bdp_fetchAssets:(unsigned long long)a0 mediaType:(long long)a1 options:(id)a2 error:(id *)a3;
- (id)bdp_calendarsForEntityType:(unsigned long long)a0 type:(unsigned long long)a1 eventStore:(id)a2 error:(id *)a3;
- (long long)bdp_authorizationStatusForEntityType:(unsigned long long)a0 type:(unsigned long long)a1 error:(id *)a2;
- (void)bdp_requestAccessToEntityType:(unsigned long long)a0 type:(unsigned long long)a1 eventStore:(id)a2 completion:(id /* block */)a3;
- (BOOL)bdp_saveEvent:(id)a0 type:(unsigned long long)a1 span:(long long)a2 eventStore:(id)a3 error:(id *)a4;

@end
