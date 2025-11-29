@class NSMutableArray, NSMutableDictionary, NSHashTable;

@interface CAKOnlineResourceManager : NSObject

@property (retain, nonatomic) NSHashTable *cakOnlineTasks;
@property (retain, nonatomic) NSMutableDictionary *requestIDDic;
@property (nonatomic) int curIndex;
@property (retain, nonatomic) NSMutableArray *onlineTasks;

+ (id)CSRFProtectHeader;
+ (int)CAKRequestOnlineImageWithModel:(id)a0 resetHandler:(id /* block */)a1 progressHandler:(id /* block */)a2 successHandler:(id /* block */)a3 failureHandler:(id /* block */)a4;
+ (id)generatePathWithFileName:(id)a0 taskId:(id)a1;
+ (id)getFolderOfTaskId:(id)a0;
+ (id)taskBaseFolder;
+ (void)saveMetadataWithVideoURL:(id)a0 outputURL:(id)a1 data:(id)a2 completion:(id /* block */)a3;
+ (int)CAKRequestOnlineVideoWithModel:(id)a0 resetHandler:(id /* block */)a1 progressHandler:(id /* block */)a2 successHandler:(id /* block */)a3 failureHandler:(id /* block */)a4;
+ (void)cancelCAKOnlineTaskWithID:(int)a0;
+ (void)cancelCAKOnlineTaskWithAsset:(id)a0;
+ (int)CAKRequestOnlineVideoAndImageWithModel:(id)a0 resetHandler:(id /* block */)a1 progressHandler:(id /* block */)a2 successHandler:(id /* block */)a3 failureHandler:(id /* block */)a4;
+ (int)CAKRequestOnlineLivePhotoPAAssetWithModel:(id)a0 resetHandler:(id /* block */)a1 progressHandler:(id /* block */)a2 successHandler:(id /* block */)a3 failureHandler:(id /* block */)a4;
+ (int)downloadImageAssetWithModel:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (int)downloadVideoAssetWithModel:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (int)downloadLivePhotoAssetWithModel:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)generateLivePhotoFromStillImage:(id)a0 videoURL:(id)a1 outputDirectory:(id)a2 completion:(id /* block */)a3;
+ (BOOL)writeAssetIdentifier:(id)a0 toJPEG:(id)a1 outputURL:(id)a2;
+ (void)writeAssetIdentifier:(id)a0 toMOV:(id)a1 outputURL:(id)a2 completion:(id /* block */)a3;
+ (int)downloadAssetWithURLs:(id)a0 targetPath:(id)a1 atIndex:(long long)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 headers:(id)a2 requestConfig:(id /* block */)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
+ (id)rootFolder;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
