@interface XPlayAlbum : NSObject

+ (void)albumUploadStatus:(unsigned long long)a0;
+ (void)albumCapturePhotoWithAlbumCertToken:(id)a0 videoCertToken:(id)a1 completion:(id /* block */)a2;
+ (void)albumPickPhotoWithCertToken:(id)a0 completion:(id /* block */)a1;
+ (void)albumSharePhoto:(id)a0;
+ (void)albumShowSharePhotoAlert:(id /* block */)a0;
+ (void)albumDownloadStatus:(unsigned long long)a0;
+ (void)albumSavePhotoWithCertToken:(id)a0 image:(id)a1 completion:(id /* block */)a2;
+ (void)albumShowSavePhotoAlert:(id /* block */)a0;

@end
