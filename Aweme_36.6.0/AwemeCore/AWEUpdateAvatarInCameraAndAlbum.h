@class NSDictionary, UIViewController, NSString;

@interface AWEUpdateAvatarInCameraAndAlbum : NSObject <CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource, AWEUpdateAvatarInCameraAndAlbumService>

@property (weak, nonatomic) UIViewController *photoLibraryVC;
@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)updateAvatarInAlbum:(id)a0;
- (void)trackReplaceProfileInfo;
- (void)openPhotoLibraryPicker;
- (void)showPhotoAuthAlert;
- (void)trackEditAvatarPageSwitch:(id)a0 albumToShoot:(BOOL)a1 shootToAlbum:(BOOL)a2;
- (void)cameraFinishResultHandlerFromAlbum:(BOOL)a0 image:(id)a1 originImage:(id)a2 actionBlock:(id /* block */)a3;
- (id)addCameraEntranceToPhotoPicker;
- (void)openCamera:(BOOL)a0;
- (id)scaleToSize:(id)a0 newSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
