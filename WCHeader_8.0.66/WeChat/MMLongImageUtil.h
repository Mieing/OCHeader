@interface MMLongImageUtil : NSObject

+ (void)saveImageToAlbum:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
+ (void)saveImageToAlbum:(id)a0 exifUserComment:(id)a1 viewController:(id)a2 completion:(id /* block */)a3;
+ (void)saveImageInFragment:(id)a0 exifUserComment:(id)a1 viewController:(id)a2 completion:(id /* block */)a3;
+ (id)genArrImageFromImage:(id)a0;
+ (BOOL)checkImageHeightOverLimitPixel:(id)a0;

@end
