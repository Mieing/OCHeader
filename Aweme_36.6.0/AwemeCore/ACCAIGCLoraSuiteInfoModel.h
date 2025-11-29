@class NSString, VEAlgorithmSession, DUXLoadingToast;

@interface ACCAIGCLoraSuiteInfoModel : NSObject

@property (retain, nonatomic) NSString *algorithmModelFilePath;
@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property (nonatomic) BOOL algorithmRunning;
@property unsigned long long fromScene;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;

+ (id)new;

- (id)initInfoModelWith:(unsigned long long)a0;
- (void)runAlgorithmWithImagePaths:(id)a0 albumOperateQueue:(id)a1 completion:(id /* block */)a2;
- (void)fetchEffectModelUseQueue:(id)a0 completion:(id /* block */)a1;
- (void)runVideoAlgorithmWithImagePaths:(id)a0 albumOperateQueue:(id)a1 completion:(id /* block */)a2;
- (void)p_doAlgorithmImagePaths:(id)a0 modelFilePath:(id)a1 albumOperateQueue:(id)a2 completion:(id /* block */)a3;
- (void)p_doVideoAlgorithmImagePaths:(id)a0 modelFilePath:(id)a1 albumOperateQueue:(id)a2 completion:(id /* block */)a3;
- (id)compressImageWith:(id)a0 size:(long long)a1;
- (id)covertImagePathsWith:(id)a0;
- (id)transResultModelFromEnterSceneWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
