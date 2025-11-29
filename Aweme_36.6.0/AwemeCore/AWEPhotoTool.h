@interface AWEPhotoTool : NSObject

+ (void)saveImageToAlbum:(id)a0 completion:(id /* block */)a1;
+ (void)saveImageToAlbumUsingAssetsLib:(id)a0 completion:(id /* block */)a1;
+ (void)saveImageToAlbumUsingPhotoKit:(id)a0 completion:(id /* block */)a1;
+ (void)disableAssertLib;

@end
