@interface CGAlbumManager : CGObject

@property (nonatomic) BOOL savingPhoto;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)sendPhotoFilePathInTOS:(id)a0;
- (void)handlePickPhotoAction:(id)a0;
- (void)handleSavePhotoAction:(id)a0;
- (void)_handlePickPhotoAction:(id)a0;
- (void)_handleSavePhotoAction:(id)a0;
- (id)albumHandler_requestCameraPermissionBPEAToken;
- (id)albumHandler_requestPHAuthorizationBPEAToken;
- (void)albumHandler_receivedCameraPermissionFailed;
- (void)savePhotoToAlbumWithDownloadURL:(id)a0 completion:(id /* block */)a1;
- (void)albumHandler_receivedPHAddOnlyAuthorizationPermissionFailed;
- (void)downloadImageWithURL:(id)a0 completion:(id /* block */)a1;
- (void)handleCameraAction:(id)a0;
- (void)albumHandler_receivedPHAuthorizationPermissionFailed;
- (void)uploadImage:(id)a0;

@end
