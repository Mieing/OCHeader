@class NSString;

@interface AWEACCLocationImpl : HTSService <ACCLocationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentSelectedCityCode;
- (id)transformLocationWithCLLocation:(id)a0 encodeType:(unsigned long long)a1;
- (unsigned long long)locationAccessStatus;
- (void)requestPermissionWithCertName:(id)a0 completion:(id /* block */)a1;
- (id)getCurrentLocationWithCertName:(id)a0 encodeType:(unsigned long long)a1;
- (void)requestCurrentLocationWithCertName:(id)a0 completion:(id /* block */)a1;
- (void)reverseGeoCode:(id)a0 certName:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_encodeTypeTranslate:(unsigned long long)a0;
- (unsigned long long)_permissionTranslate:(unsigned long long)a0;
- (id)currentRegion;
- (BOOL)hasPermission;

@end
