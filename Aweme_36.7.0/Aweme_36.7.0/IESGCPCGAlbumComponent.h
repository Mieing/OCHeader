@class IESGCPCGImagePickerPresenter, NSString, NSProgress, UIView;

@interface IESGCPCGAlbumComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, XPlayAlbumDelegate, IESGCPCGImagePickerPresenterDelegate>

@property (retain, nonatomic) IESGCPCGImagePickerPresenter *imagePresenter;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAlbumSaveVideoActionWithDownloadUrl:(id)a0;
- (void)onAlbumPickPhotoAction;
- (void)onAlbumSavePhotoActionWithDownloadUrl:(id)a0;
- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)toastOnMainQueueWithTitle:(id)a0;
- (void)removeToastFromSuperView;
- (void)toastOnMainQueueWithString:(id)a0;
- (void)showSavePhotoAlertWithUIImage:(id)a0;
- (void)didCompletePickPhoto:(id)a0;
- (void)didCancelPickPhoto;
- (void).cxx_destruct;

@end
