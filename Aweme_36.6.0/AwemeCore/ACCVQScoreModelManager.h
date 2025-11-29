@interface ACCVQScoreModelManager : NSObject

+ (void)downloadModelIfNeededWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)unzippedModelPath;
+ (BOOL)isAlgorithmModelDownloaded;
+ (void)downloadAlgorithmModelIfNeededWithCompletion:(id /* block */)a0;
+ (id)p_modelRequestInfos;
+ (void)_downloadModelIfNeededWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
+ (void)unzipAndSetupModelAtPath:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)unzipFile:(id)a0 withCompletion:(id /* block */)a1;
+ (id)unzippedModelFolder;
+ (void)_downloadAlgorithmModelIfNeededWithCompletion:(id /* block */)a0;
+ (id)modelPath;

@end
