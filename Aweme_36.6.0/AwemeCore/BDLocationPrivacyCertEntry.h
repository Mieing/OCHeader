@interface BDLocationPrivacyCertEntry : BDPrivacyCertEntry

+ (long long)authorizedStatus;
+ (void)requestLocationWithManager:(id)a0 privacyCert:(id)a1 error:(id *)a2;
+ (void)startUpdateLocationWithManager:(id)a0 privacyCert:(id)a1 error:(id *)a2;
+ (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)a0 manager:(id)a1 privacyCert:(id)a2 completion:(id /* block */)a3;
+ (void)requestWhenInUseAuthorizationWithManager:(id)a0 privacyCert:(id)a1 error:(id *)a2;
+ (long long)statusTransformer:(int)a0;
+ (void)checkAuthorizationStatusAndRequestPermissionWithPrivacyCert:(id)a0 locationManager:(id)a1;

@end
