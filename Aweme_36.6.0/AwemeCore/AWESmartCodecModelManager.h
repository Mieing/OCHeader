@interface AWESmartCodecModelManager : NSObject

+ (BOOL)isAlgorithmModelDownloaded;
+ (void)p_downloadAlgorithmModelIfNeededWithCompletion:(id /* block */)a0;
+ (void)downloadAlgorithmModelIfNeededWithCompletion:(id /* block */)a0;
+ (id)p_modelRequestInfos;
+ (void)downloadModelIfNeeded;
+ (id)modelPath;

@end
