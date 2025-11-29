@interface BDAlbumPrivacyCertEntry : BDPrivacyCertEntry

+ (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2 manager:(id)a3 cert:(id)a4 error:(id *)a5;
+ (id)defaultManagerWithCert:(id)a0 error:(id *)a1;
+ (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4 manager:(id)a5 cert:(id)a6 error:(id *)a7;
+ (long long)authorizedStatusForLevel:(long long)a0;
+ (id)fetchAssetsWithMediaType:(long long)a0 options:(id)a1 cert:(id)a2 error:(id *)a3;
+ (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4 manager:(id)a5 cert:(id)a6 error:(id *)a7;
+ (id)fetchAssetsWithLocalIdentifiers:(id)a0 options:(id)a1 cert:(id)a2 error:(id *)a3;
+ (id)fetchAssetsInAssetCollection:(id)a0 options:(id)a1 cert:(id)a2 error:(id *)a3;
+ (id)fetchAssetCollectionsWithType:(long long)a0 subtype:(long long)a1 options:(id)a2 cert:(id)a3 error:(id *)a4;
+ (void)registerChangeObserver:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)requestAuthorizationWithCert:(id)a0 completionHandler:(id /* block */)a1 forAccessLevel:(long long)a2;
+ (id)initImagePickerControllerWithCert:(id)a0 error:(id *)a1;
+ (void)requestAuthorizationWithCert:(id)a0 completionHandler:(id /* block */)a1;
+ (id)initPHPickerViewControllerWithConfig:(id)a0 withCert:(id)a1 error:(id *)a2;
+ (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2 manager:(id)a3 cert:(id)a4 error:(id *)a5;
+ (void)requestAuthorizationForAccessLevel:(long long)a0 withCert:(id)a1 completionHandler:(id /* block */)a2;
+ (id)fetchAssetsWithOptions:(id)a0 cert:(id)a1 error:(id *)a2;
+ (void)performChanges:(id /* block */)a0 cert:(id)a1 completionHandler:(id /* block */)a2;
+ (long long)statusTransformer:(long long)a0;
+ (void)performChangesAndWait:(id /* block */)a0 cert:(id)a1 error:(id *)a2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)a0 cert:(id)a1 error:(id *)a2;
+ (int)requestImageDataAndOrientationForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2 manager:(id)a3 cert:(id)a4 error:(id *)a5;
+ (id)creationRequestForAssetFromImage:(id)a0 cert:(id)a1 error:(id *)a2;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)a0 cert:(id)a1 error:(id *)a2;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)a0 cert:(id)a1 error:(id *)a2;
+ (id)creationRequestForAssetWithCert:(id)a0 error:(id *)a1;
+ (void)checkAuthorizationStatusAndRequestPermissionForLevel:(long long)a0 privacyCert:(id)a1 completion:(id /* block */)a2;

@end
