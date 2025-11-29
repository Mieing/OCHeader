@interface OMJCamResourceManager : NSObject

@property (nonatomic) struct SharedPtr<XMJCamResourceManager> { struct XMJCamResourceManager *_ptr; } backingResourceManager;

+ (BOOL)registerLocalTemplateWithTemplateID:(id)a0 version:(unsigned long long)a1 filePath:(id)a2 environmentCachesDirectory:(id)a3 error:(id *)a4;
+ (BOOL)isLocalTemplateExistsWithTemplateID:(id)a0 version:(unsigned long long)a1 environmentCachesDirectory:(id)a2;

- (id)initWithBackingResourceManager:(const void *)a0;
- (BOOL)isBuiltinCommonResourcesLoaded;
- (int)loadBuiltinCommonResourcesWithCompletionHandler:(id /* block */)a0;
- (int)loadTemplateWithTemplateID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)loadTemplateWithTemplateID:(id)a0 loadPriority:(long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cancelLoadWithTaskID:(int)a0;
- (void)cancelAll;
- (BOOL)isTemplateLoadedWithTemplateID:(id)a0 version:(unsigned long long)a1;
- (id)getTemplateInfoWithTemplateID:(id)a0 version:(unsigned long long)a1;
- (BOOL)removeTemplateWithTemplateID:(id)a0 version:(unsigned long long)a1;
- (long long)requestMaterialPackWithScene:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)cancelMaterialPackTask:(long long)a0;
- (long long)loadMaterial:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)cancelLoadMaterialTask:(long long)a0;
- (id)getBeautyAdjustmentDescWithMaterialID:(id)a0;
- (int)loadMusicWithMusicID:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)loadMusicWithMusicID:(id)a0 progressHandler:(id /* block */)a1 musicCompletionHandler:(id /* block */)a2;
- (void)cancelLoadMusicWithTaskID:(int)a0;
- (BOOL)isMusicLoadedWithID:(id)a0;
- (void)registerLocalMusicWithInfo:(id)a0 musicFilePath:(id)a1;
- (id)musicFilePathWithID:(id)a0;
- (void)selectAndLoadMusicWithMusicIDs:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)selectAndLoadMusicWithMusicIDs:(id)a0 progressHandler:(id /* block */)a1 musicCompletionHandler:(id /* block */)a2;
- (void)cancelSelectAndLoadMusic;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
