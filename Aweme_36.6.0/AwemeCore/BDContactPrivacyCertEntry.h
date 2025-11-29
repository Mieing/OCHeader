@interface BDContactPrivacyCertEntry : BDPrivacyCertEntry

+ (long long)authorizedStatus;
+ (void)requestAccessWithCNContactStore:(id)a0 withCert:(id)a1 completionHandler:(id /* block */)a2;
+ (long long)statusTransformer:(long long)a0;
+ (void)checkAuthorizationStatusAndRequestPermissionWithPrivacyCert:(id)a0 contactStore:(id)a1 completion:(id /* block */)a2;

@end
