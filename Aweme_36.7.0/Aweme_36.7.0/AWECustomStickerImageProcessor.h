@interface AWECustomStickerImageProcessor : NSObject

+ (void)compressInputStickerOriginData:(id)a0 isGIF:(BOOL)a1 limitConfig:(id)a2 completionBlock:(id /* block */)a3;
+ (BOOL)supportCustomStickerForDataUTI:(id)a0 isImageAlbumEdit:(BOOL)a1;
+ (void)saveAndSampleStickerImage:(id)a0 usePNG:(BOOL)a1 filePrefix:(id)a2 completionBlock:(id /* block */)a3;
+ (id)requestProcessedStickerImage:(id)a0 completion:(id /* block */)a1;
+ (id)extractInputDataFromImage:(id)a0 usePNG:(BOOL)a1;

@end
