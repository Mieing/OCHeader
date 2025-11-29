@class NSString, NSMutableDictionary, NSMutableArray;

@interface ACCRepositoryWorkspace : AWEVideoPublishViewModel

@property (retain, nonatomic) NSMutableDictionary *projectDictionary;
@property (retain, nonatomic) NSMutableArray *projectUUIDList;
@property (retain, nonatomic) NSMutableArray *backupProjectUUIDList;
@property (retain, nonatomic) NSString *defaultProjectUUID;
@property (retain, nonatomic) NSString *currentUUID;
@property (retain, nonatomic) NSMutableDictionary *registerNodeInfoHash;
@property (readonly, nonatomic) unsigned long long projectsCount;

+ (id)instanceWithExtensionModels:(id)a0;
+ (id)workspace;

- (void)setExtensionModelByClass:(id)a0;
- (id)extensionModelOfClass:(Class)a0;
- (id)currentProject;
- (id)allProjectUUIDs;
- (id)allPublishViewModels;
- (void)addProject:(id)a0;
- (void)removeProjectWithUUID:(id)a0;
- (id)projectWithUUID:(id)a0;
- (id)projectAtIndex:(long long)a0;
- (id)repoDataOfProtocol:(id)a0;
- (id)megaEditor;
- (id)extensionModelOfProtocol:(id)a0;
- (id)defaultProject;
- (id)legacy_batchReaderForProtocol:(id)a0;
- (id)legacy_batchMutableDataForProtocol:(id)a0;
- (void)enumerateExtensionModels:(BOOL)a0 requireProtocol:(id)a1 requireSelector:(SEL)a2 block:(id /* block */)a3;
- (id)currentMegaEditor;
- (id)currentPreviewEditor;
- (id)currentRuntimeEditor;
- (void)removeExtensionModel:(Class)a0;
- (id)deepCopyExtensionModels;
- (id)allBackupProjectUUIDs;
- (id)allBackupPublishViewModels;
- (id)instanceRepoDatasOfProtocol:(id)a0;
- (void)aek_generateMegaEditorWithNLE:(id)a0 forProject:(id)a1;
- (id)instanceRepoModelsOfClass:(Class)a0;
- (id)batchReaderForProtocol:(id)a0;
- (id)batchMutableDataForProtocol:(id)a0;
- (id)aek_subscriberProvider;
- (void)aek_clearAllMegaEditor;
- (void)aek_generateAllMegaEditor;
- (void)aek_clearMegaEditorForProject:(id)a0;
- (void)aek_updateMegaEditorWithModel:(id)a0 forProject:(id)a1;
- (void)aek_generateMegaEditorWithData:(id)a0 forProject:(id)a1;
- (void)switchToUUID:(id)a0;
- (id)childRepositoryList;
- (long long)indexWithProjectUUID:(id)a0;
- (void)backupProjectUUIDs:(id)a0;
- (void)cleanBackupProjectUUIDs;
- (void)moveUUID:(id)a0 toIndex:(long long)a1;
- (void)copyPublishModelFrom:(id)a0;
- (void)cacheBackupProject:(id)a0;
- (void)recoveryDefaultProjectWithExtensionModels:(id)a0;
- (void)copyWorkspaceFrom:(id)a0;
- (id)deepCopyDictionary:(id)a0;
- (id)createContainerWithReuseScopes:(id)a0;
- (void)makeDefaultProject;
- (id)initForInstance;
- (void)updateRelatedProject:(id)a0 oldUUID:(id)a1;
- (void)deepCopyProjectsToWorkspace:(id)a0;
- (void)workspaceAssignCopyPublishViewModelTo:(id)a0 from:(id)a1;
- (id)workspace_repoModelOfClass:(Class)a0;
- (long long)currentIndex;
- (void).cxx_destruct;
- (id)workspace;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
