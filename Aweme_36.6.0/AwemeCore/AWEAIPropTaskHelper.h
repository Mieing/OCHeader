@interface AWEAIPropTaskHelper : NSObject

+ (Class)taskClassWithType:(long long)a0;
+ (id)convertToFileURLWithLocalPath:(id)a0;
+ (void)enterEditWithAssets:(id)a0 publishModel:(id)a1 isAsync:(BOOL)a2 completion:(id /* block */)a3;
+ (id)convertToVideoWithVideoPath:(id)a0;
+ (void)downloadCoverImageAndVideoData:(id)a0 effectId:(id)a1 imageURLs:(id)a2 videoURLs:(id)a3 multiImageURLs:(id)a4 rawImages:(id)a5 liveImageURLs:(id)a6 liveVideoURLs:(id)a7 needOperateQueuePriority:(BOOL)a8 completion:(id /* block */)a9;
+ (void)enterEditWithAssets:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (unsigned long long)editModeWithAssets:(id)a0;
+ (void)enterEditWithAssets:(id)a0 publishModel:(id)a1 isAsync:(BOOL)a2 withMode:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)handleAIPropCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
+ (id)configClipInputData:(id)a0 withRepoContainer:(id)a1;
+ (void)present:(id)a0 animated:(BOOL)a1;
+ (void)downloadMultiOriginImageWith:(id)a0 identifier:(id)a1 needOperateQueuePriority:(BOOL)a2 completion:(id /* block */)a3;
+ (void)downloadRawImageWith:(id)a0 identifier:(id)a1 needOperateQueuePriority:(BOOL)a2 completion:(id /* block */)a3;
+ (void)downloadAfterProcessEffect:(id)a0 completion:(id /* block */)a1;
+ (void)convertToVideoWithVideoPath:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;

@end
