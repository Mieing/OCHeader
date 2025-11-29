@interface ACCLivePhotoUtils : NSObject

+ (void)saveLocalSourceToDraftWithModel:(id)a0;
+ (void)setupLoraLivePhotoSceneModeDataWithVideoUrl:(id)a0 imageUrl:(id)a1 videoData:(id)a2 musicDuration:(double)a3 syncCompletion:(id /* block */)a4;
+ (double)effectDurationWithVideoAsset:(id)a0;
+ (void)deletFileIfNeed:(id)a0;
+ (void)setupLivePhotoStaticModeDataWithImageUrl:(id)a0 videoData:(id)a1;
+ (void)setupLivePhotoSceneModeDataWithVideoUrl:(id)a0 imageUrl:(id)a1 videoData:(id)a2 picDuration:(double)a3;
+ (void)setupLivePhotoLoopModeDataWithVideoUrl:(id)a0 videoData:(id)a1;
+ (BOOL)hasLivePhotoInSelectedAlbumAssets:(id)a0;

@end
