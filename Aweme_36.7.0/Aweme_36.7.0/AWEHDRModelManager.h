@interface AWEHDRModelManager : NSObject

+ (BOOL)isAlgorithmModelDownloaded;
+ (void)p_downloadAlgorithmModelIfNeededWithCompletion:(id /* block */)a0;
+ (id)lensHDRModelNames;
+ (BOOL)useOneKeyHDR;
+ (id)modelNameForScene:(int)a0;
+ (BOOL)enableVideoHDR;
+ (void)downloadAlgorithmModelIfNeededWithCompletion:(id /* block */)a0;
+ (id)modelPathForScene:(int)a0;
+ (id)lensModelPath;

@end
