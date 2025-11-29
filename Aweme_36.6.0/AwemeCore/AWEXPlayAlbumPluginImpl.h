@class DUXAlertDialog, NSString, AWEXPlayImagePickerPresenter, DUXLoadingToast;

@interface AWEXPlayAlbumPluginImpl : NSObject <XPlayAlbumPluginDelegate>

@property (retain, nonatomic) AWEXPlayImagePickerPresenter *imagePresenter;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) DUXAlertDialog *alertDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;

- (void)xplay_albumCapturePhotoWithAlbumCertToken:(id)a0 videoCertToken:(id)a1 completion:(id /* block */)a2;
- (void)xplay_albumPickPhotoWithCertToken:(id)a0 completion:(id /* block */)a1;
- (void)xplay_albumSavePhotoWithCertToken:(id)a0 image:(id)a1 completion:(id /* block */)a2;
- (void)xplay_albumUploadStatus:(unsigned long long)a0;
- (void)xplay_albumDownloadStatus:(unsigned long long)a0;
- (void)xplay_albumShowSavePhotoAlert:(id /* block */)a0;
- (void)xplay_albumShowSharePhotoAlert:(id /* block */)a0;
- (void)xplay_albumSharePhoto:(id)a0;
- (void).cxx_destruct;

@end
