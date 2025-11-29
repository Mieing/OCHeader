@interface AWEAIMemoriesNoticeRouter : NSObject

@property (nonatomic) BOOL hasClickDismissLoading;

+ (id)sharedInstance;

- (void)getAssetPathWithAssetId:(id)a0 completion:(id /* block */)a1;
- (void)preloadTemplateMusicIfNeededWithRepoAIMemories:(id)a0;
- (void)downloadLocalImageWithModel:(id)a0 complete:(id /* block */)a1;
- (void)downloadLocalVideoWithModel:(id)a0 complete:(id /* block */)a1;
- (void)checkFilePathExists;
- (id)AIMemoriesDirectory;
- (void)downloadPhotoHandlerWithImage:(id)a0 info:(id)a1 savePath:(id)a2 complete:(id /* block */)a3;
- (void)exportLocalVideoWithAVAsset:(id)a0 destURL:(id)a1 complete:(id /* block */)a2;
- (id)AIMemoriesDirectoryPath;
- (void)handleAIMemoriesNoticeRouterWithParams:(id)a0 completion:(id /* block */)a1;

@end
