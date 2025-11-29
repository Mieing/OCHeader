@class NSString;

@interface AWELiveLocationServiceImpl : NSObject <IESLiveLocationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasSystemPermission;
- (void)requestLocationWithPrivacyHybridCert:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)currentCityCodeWithPrivacyCert:(id)a0;
- (void)requestLocationWithPrivacyCert:(id)a0 completion:(id /* block */)a1;
- (void)requestLocationNewWithPrivacyCert:(id)a0 completion:(id /* block */)a1;
- (void)requestLocationPermissionWithPrivacyCert:(id)a0 auth:(id)a1 completion:(id /* block */)a2;
- (void)requestCurrentLocationWithCert:(id)a0 authToken:(id)a1 completion:(id /* block */)a2;
- (id)currentLocationWithPrivacyCert:(id)a0;
- (id)currentSelectCityName;
- (id)currentSelectCityCode;
- (void)requestCurrentCityCodeWithPrivacyCert:(id)a0 callBack:(id /* block */)a1;

@end
