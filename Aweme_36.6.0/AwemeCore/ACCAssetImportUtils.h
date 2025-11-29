@interface ACCAssetImportUtils : NSObject

+ (struct CGSize { double x0; double x1; })preferredCoverImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)makeTaskWithPathList:(id)a0 workspace:(id)a1 completion:(id /* block */)a2;
+ (void)makeTaskWithAssetModels:(id)a0 pathList:(id)a1 projects:(id)a2 completion:(id /* block */)a3;
+ (id)configWithTaskID:(id)a0 UUID:(id)a1 assetModel:(id)a2;
+ (id)configProject:(id)a0 withPath:(id)a1;
+ (id)configProject:(id)a0 withOnlineImageURLs:(id)a1;
+ (id)configProject:(id)a0 withOnlineLiveImageURLs:(id)a1 LiveVideoURLs:(id)a2;
+ (id)configProject:(id)a0 withRemoteURL:(id)a1;
+ (id)configProject:(id)a0 withAssetModel:(id)a1;
+ (void)makeTaskWithAssetModels:(id)a0 projects:(id)a1 completion:(id /* block */)a2;
+ (void)makeTaskWithAssetModels:(id)a0 workspace:(id)a1 completion:(id /* block */)a2;

@end
