@class NSString;

@interface IESGCPXPlayPermissionService_Douyin : NSObject <IESGCPXPlayPermissionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPermissionWithBDCert:(id)a0 bdAuthScene:(id)a1 completion:(id /* block */)a2;
- (void)requestCurrentLocationWithBDCert:(id)a0 bdAuthScene:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasLocationPermission;
- (long long)cameraPermissionStatus;
- (void)requestCameraPermissionWithBDCertToken:(id)a0 completion:(id /* block */)a1;

@end
