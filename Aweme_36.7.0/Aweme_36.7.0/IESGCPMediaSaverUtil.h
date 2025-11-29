@interface IESGCPMediaSaverUtil : NSObject

+ (void)saveImageWithURL:(id)a0 start:(id /* block */)a1 finish:(id /* block */)a2;
+ (void)saveVideoWithURL:(id)a0 start:(id /* block */)a1 finish:(id /* block */)a2;
+ (void)saveImage:(id)a0 withCompletion:(id /* block */)a1;
+ (void)requestPhotoLibraryPermissionForReadAndWriteAlbumWithPrivacyCert:(id)a0 completion:(id /* block */)a1;

@end
