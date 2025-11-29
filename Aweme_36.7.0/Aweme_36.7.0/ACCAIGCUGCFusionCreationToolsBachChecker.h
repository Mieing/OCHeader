@class NSObject, NSMutableArray, ACCAIGCLoraSuiteInfoModel;
@protocol OS_dispatch_queue;

@interface ACCAIGCUGCFusionCreationToolsBachChecker : NSObject

@property (retain, nonatomic) ACCAIGCLoraSuiteInfoModel *localCheckModel;
@property (retain, nonatomic) ACCAIGCLoraSuiteInfoModel *localVideoCheckModel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *albumOperateQueue;
@property (retain, nonatomic) NSMutableArray *pendingLocalCheckTasks;
@property (nonatomic) BOOL isProcessingLocalCheck;

+ (id)sharedChecker;
+ (void)bachCheckWithAsset:(id)a0 filePath:(id)a1 retryLimit:(unsigned long long)a2 completionBlock:(id /* block */)a3;
+ (void)bachCheckWithAsset:(id)a0 filePath:(id)a1 completionBlock:(id /* block */)a2;
+ (void)preLoadBachCheckModelResource:(id /* block */)a0;
+ (void)bachLocalCheckWithResultImage:(id)a0 localFilePath:(id)a1 completionBlock:(id /* block */)a2;
+ (void)saveImages:(id)a0 videoIdentifier:(id)a1 completion:(id /* block */)a2;
+ (id)extractUUIDFromPathString:(id)a0;
+ (void)WriteImageWith:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
+ (void)cropOriginImgSaveLocalPathAndLocalCheckWithAssetModel:(id)a0 completionBlock:(id /* block */)a1;
+ (void)fetchImageAndBachLocalCheckWithFilePath:(id)a0 completionBlock:(id /* block */)a1;
+ (void)cropOriginImgAndSaveLocalPath:(id)a0 afterCompletion:(id /* block */)a1;
+ (void)realDownsamplingImageWith:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
+ (void)saveImageToLocalAndLocalCheckWithImage:(id)a0 identifier:(id)a1 completionBlock:(id /* block */)a2;
+ (id)assembleAbsolutePathWithIdentifier:(id)a0;
+ (void)requestImageForAssetModel:(id)a0 completion:(id /* block */)a1;
+ (struct CGSize { double x0; double x1; })resizeWithAssetModel:(id)a0;
+ (void)bachLocalCheckWithResultImageArray:(id)a0 videoIdentifier:(id)a1 completionBlock:(id /* block */)a2;
+ (void)batchSaveImageToLocalAndLocalCheckWithPhotoList:(id)a0 completionBlock:(id /* block */)a1;

- (void)processNextTask;
- (void)preLoadBachCheckModelResource:(id /* block */)a0;
- (void)bachLocalCheckWithResultImage:(id)a0 localFilePath:(id)a1 completionBlock:(id /* block */)a2;
- (void)bachLocalCheckWithLocalFilePaths:(id)a0 completionBlock:(id /* block */)a1;
- (void)serialLocalCheckWithLocalFilePaths:(id)a0 completionBlock:(id /* block */)a1;
- (void)bachVideoLocalCheckWithLocalFilePaths:(id)a0 completionBlock:(id /* block */)a1;
- (void)cropOriginImgSaveLocalPathAndLocalCheckWithAssetModel:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchImageAndBachLocalCheckWithFilePath:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveImageToLocalAndLocalCheckWithImage:(id)a0 identifier:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
