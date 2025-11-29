@class NSString;

@interface AWEImageAlbumEditAssetsExportManager : HTSService <ACCImageAlbumAssetsExportManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })exportSizeForPHAsset:(id)a0;
+ (void)p_fetchImageWithPlaceholderModels:(id)a0 publishModel:(id)a1 completionHandler:(id /* block */)a2;
+ (id)p_exportLock;
+ (id)p_exportQueue;
+ (void)p_handleExportSucceedWithPlaceholderModels:(id)a0 publishModel:(id)a1 completionHandler:(id /* block */)a2;
+ (void)p_exportAssetToLocalFileWithModel:(id)a0 rootOutputFolderPath:(id)a1 completion:(id /* block */)a2;
+ (BOOL)p_copyImageWithModel:(id)a0 originalImageFilePath:(id)a1 rootOutputFolderPath:(id)a2 isCompressedImage:(BOOL)a3;
+ (id)recodeOriginImageDataWith:(id)a0 placeholderModel:(id)a1;
+ (BOOL)p_saveOriginalImageWithModel:(id)a0 originalImage:(id)a1 imageData:(id)a2 rootOutputFolderPath:(id)a3;
+ (void)p_saveCompressedImageWithModel:(id)a0 originalImage:(id)a1 imageData:(id)a2 rootOutputFolderPath:(id)a3;
+ (struct CGSize { double x0; double x1; })p_exportImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)fetchOriginImageWithAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 resizeMode:(long long)a2 completion:(id /* block */)a3;
+ (id)downsampleWithLimitSize:(struct CGSize { double x0; double x1; })a0 originImage:(id)a1 placeholderModel:(id)a2;
+ (id)p_originalImagePathAtFolder:(id)a0 index:(long long)a1;
+ (id)p_compressedImagePathAtFolder:(id)a0 index:(long long)a1;
+ (id)p_creatImageInputInfo:(id)a0 isOriginal:(BOOL)a1 taskId:(id)a2;
+ (void)exportWithImagePaths:(id)a0 imagePathsForCompress:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
+ (void)exportWithResourceModels:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (struct CGSize { double x0; double x1; })exportSizeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (long long)resizeMode;

- (id)exportWithAssetModels:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
- (void)exportWithImages:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;

@end
