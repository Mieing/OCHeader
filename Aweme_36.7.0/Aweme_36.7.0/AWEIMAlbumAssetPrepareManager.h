@class NSOperationQueue;

@interface AWEIMAlbumAssetPrepareManager : NSObject

@property (retain, nonatomic) NSOperationQueue *preprocessQueue;

+ (long long)getAlbumAssetTypeWithMediaType:(long long)a0 isLivePhoto:(BOOL)a1;
+ (id)getAlbumAssetPreprocessorWithContext:(id)a0;
+ (id)prepareAssetWithLocalAsset:(id)a0 asset:(id)a1 isLivePhoto:(BOOL)a2 useOrigin:(BOOL)a3;
+ (void)onUseOriginDidSwitchWithAsset:(id)a0 useOrigin:(BOOL)a1;
+ (id)prepareAssetWithMessage:(id)a0;
+ (id)prepareCameraPublishPreProcessorWithType:(long long)a0 taskID:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
