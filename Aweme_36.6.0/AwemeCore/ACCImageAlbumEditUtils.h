@interface ACCImageAlbumEditUtils : NSObject

+ (BOOL)saveImageWithFilePath:(id)a0 imageData:(id)a1 originImage:(id)a2 usingOriginImageData:(BOOL)a3 trackParams:(id)a4;
+ (id)compressImage:(id)a0 toTargetSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)saveImageWithFilePath:(id)a0 imageData:(id)a1 originImage:(id)a2 usingOriginImageData:(BOOL)a3;

@end
