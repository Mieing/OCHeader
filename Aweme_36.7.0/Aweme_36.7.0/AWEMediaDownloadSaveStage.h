@interface AWEMediaDownloadSaveStage : AWEMediaDownloadBaseStage

- (long long)progressUnitCount;
- (void)saveImageToAlbum;
- (void)saveLivePhotoToAlbum:(id)a0 imageURL:(id)a1;
- (void)saveDownloadedImagesToAlbum;
- (void)saveGIFToAlbum;
- (void)saveVideoToAlbum;
- (void)moveLivePhotoToDir:(id)a0 imageURL:(id)a1;
- (void)run;
- (void)handleProgress:(double)a0;

@end
