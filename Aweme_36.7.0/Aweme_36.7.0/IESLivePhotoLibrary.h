@class NSString;

@interface IESLivePhotoLibrary : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, IESLivePhotoLibraryService>

@property (copy, nonatomic) id /* block */ assetCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showImagePickerWithPrivacyHybridCert:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (void)showVideoPickerWithPrivacyHybridCert:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (void)showImagePickerWithHostVC:(id)a0 withPrivacyCert:(id)a1 completion:(id /* block */)a2;
- (void)showImagePickerWithPrivacyCert:(id)a0 withCompletion:(id /* block */)a1;
- (void)showPhotoPickerWithPrivacyCert:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)showVideoPickerWithPrivacyCert:(id)a0 withCompletion:(id /* block */)a1;
- (void)showPhotoPickerWithPrivacyCert:(id)a0 options:(unsigned long long)a1 hostVC:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
