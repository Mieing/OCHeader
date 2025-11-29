@class NSString;

@interface ACCNLEUtils : NSObject

@property (class, readonly, copy, nonatomic) NSString *nleFileName;
@property (class, readonly, copy, nonatomic) NSString *nleTemplateModelFileName;

+ (void)createNLEVideoData:(id)a0 config:(id)a1 moveResource:(BOOL)a2 needCommit:(BOOL)a3 completion:(id /* block */)a4;
+ (id)nleInterfaceWithRepository:(id)a0;
+ (id)createNLEInterfaceIfNeededWithRepository:(id)a0;
+ (void)createNLEVideoData:(id)a0 config:(id)a1 moveResource:(BOOL)a2 needCommit:(BOOL)a3 doNotRender:(BOOL)a4 completion:(id /* block */)a5;
+ (id)p_nleVideoDataWithRepository:(id)a0 editor:(id)a1 config:(id)a2;
+ (void)p_initalNLEWithRepository:(id)a0 videoData:(id)a1 nleEditor:(id)a2 moveResource:(BOOL)a3 needCommit:(BOOL)a4 completion:(id /* block */)a5;
+ (id)nleInterfaceWithRepository:(id)a0 editor:(id)a1 config:(id)a2;
+ (void)replaceSandboxForResourceWithNLEEditor:(id)a0 repository:(id)a1;
+ (void)p_recoverRightBrush:(id)a0 editor:(id)a1 repository:(id)a2;
+ (BOOL)cancelRenderInit;
+ (void)updateVideoDurationModeWithNLE:(id)a0 repository:(id)a1;
+ (void)updateUserInfoBlockForNLE:(id)a0 repository:(id)a1;
+ (void)syncNLEEditor:(id)a0 repository:(id)a1;
+ (void)p_saveNLEEditor:(id)a0 repository:(id)a1;
+ (void)p_setNleExtraWith:(id)a0 nleSticker:(id)a1 sticker:(id)a2;
+ (void)p_saveNLETemplateModel:(id)a0 repository:(id)a1;
+ (long long)restoreEditor:(id)a0 fromJson:(id)a1 publishModel:(id)a2;
+ (void)createNLEVideoData:(id)a0 editor:(id)a1 doNotRender:(BOOL)a2 completion:(id /* block */)a3;
+ (void)recoverImageTemplateDataIfNeed:(id)a0 repository:(id)a1;
+ (void)repositoryFallbackVEIfNeeded:(id)a0;
+ (void)saveNLEEditor:(id)a0 repository:(id)a1 businessJSON:(id)a2 completion:(id /* block */)a3;
+ (id)loadNLEEditorWithDraftID:(id)a0 publishViewModel:(id)a1 projectUUID:(id)a2 error:(id *)a3;
+ (void)removeNLEEditorWithDraftID:(id)a0;
+ (BOOL)p_repositoryHasNLEData:(id)a0;
+ (void)loadFilterLogDefaultCubeFile;

@end
