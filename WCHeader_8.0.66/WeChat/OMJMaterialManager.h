@interface OMJMaterialManager : NSObject

@property (nonatomic) struct SharedPtr<XMJMaterialManager> { struct XMJMaterialManager *_ptr; } backingMaterialManager;

- (long long)mj_requestMaterialPackWithScene:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (long long)mj_requestMaterialPackWithScene:(unsigned long long)a0 extraParams:(id)a1 completionHandler:(id /* block */)a2;
- (long long)mj_loadMaterial:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (long long)mj_loadMaterial:(id)a0 version:(long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)mj_waitLoadingLocalMaterialWithCompletionHandler:(id /* block */)a0;
- (id)initWithBackingMaterialManager:(const void *)a0;
- (long long)requestMaterialPackWithScene:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (long long)requestMaterialPackWithScene:(unsigned long long)a0 extraParams:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelMaterialPackTask:(long long)a0;
- (BOOL)isMaterialLoaded:(id)a0;
- (BOOL)isMaterialLoaded:(id)a0 version:(long long)a1;
- (long long)loadMaterial:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (long long)loadMaterial:(id)a0 version:(long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cancelLoadMaterialTask:(long long)a0;
- (void)cancelAll;
- (void)waitLoadingLocalMaterialWithCompletionHandler:(id /* block */)a0;
- (BOOL)registerLocalStickerMaterialWithMaterialID:(id)a0 version:(long long)a1 zipFilePath:(id)a2 error:(id *)a3;
- (BOOL)isLocalMaterialLoaded:(id)a0;
- (BOOL)isLocalMaterialLoaded:(id)a0 version:(long long)a1;
- (id)getColorStyleMaterialInfosOfMaterial:(id)a0;
- (id)getMaterialInfoWithMaterialID:(id)a0;
- (BOOL)importResourceFromLocalFileAtPath:(id)a0 resourceID:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
