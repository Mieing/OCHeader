@interface AWEInTodayPlayerDownloader : NSObject

+ (void)checkFilePathExists;
+ (void)exportLocalVideoWithAVAsset:(id)a0 destURL:(id)a1 complete:(id /* block */)a2;
+ (void)downloadWithModel:(id)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
+ (void)downloadLocalImageWithModel:(id)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
+ (void)downloadAwemeImageWithModel:(id)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
+ (void)downloadLocalVideoWithModel:(id)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
+ (void)downloadAwemeVideoWithModel:(id)a0 progress:(id /* block */)a1 complete:(id /* block */)a2;
+ (id)memoriesDirectoryPath;
+ (id)memoriesDirectory;
+ (id)memoriesPathForLocalImageTileModel:(id)a0;
+ (void)downloadPhotoHandlerWithModel:(id)a0 withImage:(id)a1 info:(id)a2 savePath:(id)a3 complete:(id /* block */)a4;
+ (void)downloadResourceWithModels:(id)a0 progress:(id /* block */)a1 hotspot:(id /* block */)a2 complete:(id /* block */)a3;
+ (void)cleanAllResource;

@end
