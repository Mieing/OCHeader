@interface AWEImageEditHDRModelManager : NSObject

+ (id)lensHDRModelNames;
+ (BOOL)didLensHDRResourcesDownloaded;
+ (void)p_downloadHDRResourceIfNeededWithCompletion:(id /* block */)a0;
+ (id)p_hdrModelsMapping;
+ (BOOL)enableImageLensHDR;
+ (void)downloadHDRResourceIfNeededWithCompletion:(id /* block */)a0;
+ (id)lensHDRFilePath;

@end
