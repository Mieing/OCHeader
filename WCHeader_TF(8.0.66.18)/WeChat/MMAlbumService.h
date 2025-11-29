@class NSString;

@interface MMAlbumService : MMRootService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isAlbumAcessGranted;
- (void)writeImageDataToSavedPhotosAlbum:(id)a0 completionBlock:(id /* block */)a1;
- (void)writeImageToSavedPhotosAlbum:(id)a0 completionBlock:(id /* block */)a1;
- (void)writeImageToSavedPhotosAlbum:(id)a0 exifUserComment:(id)a1 completionBlock:(id /* block */)a2;
- (void)writeImageToSavedArrPhotosAlbum:(id)a0 exifUserComment:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveVideoToAlbumWithPath:(id)a0;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)a0;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)a0 successBlock:(id /* block */)a1;
- (void)saveVideoToAlbumAndShowTipsWithPath:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)saveVideoToAlbumWithPath:(id)a0 isShowTips:(BOOL)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (BOOL)tryReadImageFileDataAndSave:(id)a0 placeholder:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveImageToAlbumWithPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveVideoToAlbumWithPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)exportRawVideoFile:(id)a0 complete:(id /* block */)a1;
- (void)internalSaveVideoToAlbumWithPath:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveImageToAlbumAndShowTipsWithPath:(id)a0;
- (void)saveImageToAlbumAndShowTipsWithPath:(id)a0 successBlock:(id /* block */)a1;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)a0;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)a0 exifUserComment:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveImageToAlbumAndShowTipsWithArrImage:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveImageToAlbumAndShowTipsWithArrImage:(id)a0 exifUserComment:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveImageToAlbumAndShowTipsWithImage:(id)a0 successBlock:(id /* block */)a1;
- (void)saveImageDataToAlbumWithImageData:(id)a0;
- (void)saveImageDataToAlbumAndShowTipsWithImageData:(id)a0;
- (void)saveImageDataToAlbumAndShowTipsWithImageData:(id)a0 successBlock:(id /* block */)a1;
- (void)saveImageDataToAlbumWithImageData:(id)a0 isShowTips:(BOOL)a1 successBlock:(id /* block */)a2;
- (void)saveLivePhotoToAlbumWithImagePath:(id)a0 videoPath:(id)a1 stillImageTimeMs:(long long)a2;
- (void)saveLivePhotoToAlbumAndShowTipsWithImagePath:(id)a0 videoPath:(id)a1 stillImageTimeMs:(long long)a2;
- (void)saveLivePhotoToAlbumAndShowTipsWithImage:(id)a0 videoPath:(id)a1 stillImageTimeMs:(long long)a2;
- (void)saveLivePhotoToAlbumAndShowTipsWithImage:(id)a0 videoPath:(id)a1 stillImageTimeMs:(long long)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)saveLivePhotoToAlbumWithImagePath:(id)a0 videoPath:(id)a1 stillImageTimeMs:(long long)a2 isShowTips:(BOOL)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
- (void)internalSaveLivePhotoToAlbumWithImagePath:(id)a0 videoPath:(id)a1 completionBlock:(id /* block */)a2;
- (void)showToast:(id)a0 isSuccess:(BOOL)a1;
- (void)findOrCreateAlbumWithName:(id)a0 completion:(id /* block */)a1;
- (void)internalSaveImages:(id)a0 toAlbumNamed:(id)a1 completionBlock:(id /* block */)a2;
- (void)internalSaveImages:(id)a0 toAlbumNamed:(id)a1 exifUserComment:(id)a2 completionBlock:(id /* block */)a3;
- (void)internalSaveImagePath:(id)a0 toAlbumNamed:(id)a1 completionBlock:(id /* block */)a2;
- (void)internalSaveImageData:(id)a0 toAlbumNamed:(id)a1 completionBlock:(id /* block */)a2;

@end
