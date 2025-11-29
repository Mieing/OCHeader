@class NSString;

@interface AWEWorkspaceDraftLoadServiceImpl : NSObject <AWEWorkspaceDraftLoadService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadWorkspaceWithDraft:(id)a0 context:(id)a1 strategy:(long long)a2 completion:(id /* block */)a3;
- (void)loadProjectWithWorkspace:(id)a0 projectUUID:(id)a1 completion:(id /* block */)a2;
- (void)loadProjectWithWorkspace:(id)a0 projectDraft:(id)a1 completion:(id /* block */)a2;
- (void)loadWorkspaceWithDraftID:(id)a0 context:(id)a1 strategy:(long long)a2 completion:(id /* block */)a3;
- (void)loadProjectWithOriginWorkspace:(id)a0 projectUUID:(id)a1 completion:(id /* block */)a2;
- (void)retrievePublishModuleFromDraft:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)loadProjectWithWorkspace:(id)a0 projectUUID:(id)a1 isBackupProject:(BOOL)a2 completion:(id /* block */)a3;
- (void)loadProjectWithWorkspace:(id)a0 projectDraft:(id)a1 isBackupProject:(BOOL)a2 completion:(id /* block */)a3;
- (void)performDegradeRecoverWithWorkspace:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)loadBackupProjectWithbackupProjectUUIDs:(id)a0 workspace:(id)a1 draft:(id)a2 uuidToDraftDic:(id)a3 completion:(id /* block */)a4;
- (void)sortWorkspace:(id)a0 withProjectUUIDs:(id)a1;
- (void)loadProjectWithDraftID:(id)a0 projectUUID:(id)a1 completion:(id /* block */)a2;

@end
