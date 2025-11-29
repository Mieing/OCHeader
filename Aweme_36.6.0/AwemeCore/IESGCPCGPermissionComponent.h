@class NSString;

@interface IESGCPCGPermissionComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, XPlayPermissionDelegate, IESGCPCGPermissionRouter>

@property (nonatomic) BOOL isShowingAuthorityRequestAlert;
@property (copy, nonatomic) id /* block */ recheckCameraPermissionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestCameraPermissionBPEAToken;
- (id)requestPHAuthorizationBPEAToken;
- (void)systemPermissionFailedWith:(unsigned long long)a0 info:(id)a1;
- (void)requestPermissionList:(id)a0 completion:(id /* block */)a1;
- (void)didSetGameCPDIContext;
- (void)requestRecordPermissionWithCompletion:(id /* block */)a0;
- (id)requestPHAddOnlyAuthorizationBPEAToken;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)_onAppDidBecomeActive:(id)a0;
- (void)showLocationAuthorityRequestAlert;
- (void)requestPermissionStatus:(long long)a0 completion:(id /* block */)a1;
- (void)handleLocationPermission:(id /* block */)a0;
- (void)requestAccess:(long long)a0 completion:(id /* block */)a1;
- (long long)getPermissionStatus:(long long)a0;
- (void)handlePermission:(id)a0 request:(id /* block */)a1;
- (void)requestAlbumWritePermissionWithCompletion:(id /* block */)a0;
- (void)requestAlbumReadWritePermissionWithCompletion:(id /* block */)a0;
- (void)requestAudioCapturePermissionWithCompletion:(id /* block */)a0;
- (void)_handleCameraAccessRequestWithCompletion:(id /* block */)a0;
- (void)showMicrophoneAuthorityRequestAlert;
- (void)showCameraAuthorityRequestAlert;
- (void)showAlbumAuthorityRequestAlert;
- (id)fetchResidentCacheWithKey:(id)a0;
- (void)updateResidentCacheWithGameID:(id)a0;
- (void)requestLocationPermissionWithCompletion:(id /* block */)a0;
- (BOOL)hasSystemPermission:(long long)a0;
- (BOOL)hasBusinessPermission:(long long)a0;
- (void)showLocationPermissionAlertWithActionBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
