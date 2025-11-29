@interface WCFinderMMAssetHelper : NSObject

+ (id)fileNameForAssetId:(id)a0 isLivePhoto:(BOOL)a1;
+ (id)filePathForAssetID:(id)a0 isLivePhoto:(BOOL)a1;
+ (void)asyncGetPathWithAsset:(id)a0 completion:(id /* block */)a1;
+ (void)asyncGetPathsWithAssets:(id)a0 completion:(id /* block */)a1;
+ (void)asyncGetPathsWithAssetInfos:(id)a0 completion:(id /* block */)a1;

@end
