@interface BDCameraPrivacyCertEntry : BDPrivacyCertEntry

+ (long long)authorizedStatus;
+ (void)requestAccessCameraWithPrivacyCert:(id)a0 completionHandler:(id /* block */)a1;
+ (void)startRunningWithCaptureSession:(id)a0 privacyCert:(id)a1 error:(id *)a2;
+ (void)stopRunningWithCaptureSession:(id)a0 privacyCert:(id)a1 error:(id *)a2;
+ (long long)statusTransformer:(long long)a0;
+ (void)checkAuthorizationStatusAndRequestPermissionWithPrivacyCert:(id)a0 completion:(id /* block */)a1;

@end
