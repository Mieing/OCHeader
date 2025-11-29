@interface BDMicrophonePrivacyCertEntry : BDPrivacyCertEntry

+ (long long)authorizedStatus;
+ (void)requestRecordPermission:(id /* block */)a0 audioSession:(id)a1 privacyCert:(id)a2;
+ (void)requestAccessMicrophoneWithPrivacyCert:(id)a0 completionHandler:(id /* block */)a1;
+ (int)startAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 privacyCert:(id)a1 error:(id *)a2;
+ (int)stopAudioOutputUnitWithAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0 privacyCert:(id)a1 error:(id *)a2;
+ (int)AUGraphStart:(struct OpaqueAUGraph { } *)a0 privacyCert:(id)a1 error:(id *)a2;
+ (int)AUGraphStop:(struct OpaqueAUGraph { } *)a0 privacyCert:(id)a1 error:(id *)a2;
+ (long long)statusTransformer:(long long)a0;
+ (void)checkAuthorizationStatusAndRequestPermissionWithPrivacyCert:(id)a0 completion:(id /* block */)a1;

@end
