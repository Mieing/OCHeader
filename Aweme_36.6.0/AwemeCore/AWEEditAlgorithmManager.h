@class VEAlgorithmSession;

@interface AWEEditAlgorithmManager : NSObject

@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property BOOL algorithmRunning;

+ (id)sharedManager;

- (void)runAlgorithmOfType:(long long)a0 withImagePaths:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)recommendStrategy;
- (BOOL)shouldUploadFramesForRecommendation;
- (BOOL)useBachToRecommend;
- (BOOL)shouldExtractFrames;
- (void)runAlgorithmOfType:(long long)a0 imagePaths:(id)a1 resultList:(id)a2 currentIndex:(long long)a3 completion:(id /* block */)a4;
- (void)chekAndDownloadAlgorithmModelWithCompletion:(id /* block */)a0;
- (id)generateResultWithList:(id)a0;
- (unsigned long long)veAlgorithmTypeFromACCAlgorithmType:(long long)a0;
- (void).cxx_destruct;
- (id)modelNames;

@end
