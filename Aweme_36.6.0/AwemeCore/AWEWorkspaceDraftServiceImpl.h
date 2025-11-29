@class NSString, NSMutableArray;
@protocol AWEWorkspaceDraftSaveService, AWEWorkspaceDraftLoadService;

@interface AWEWorkspaceDraftServiceImpl : HTSService <AWEWorkspaceDraftPrivateServiceProtocol, ACCUserServiceMessage, AWEWorkspaceDraftServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *waitingTasks;
@property (retain, nonatomic) NSMutableArray *executingTasks;
@property (retain, nonatomic) id<AWEWorkspaceDraftSaveService> saveImpl;
@property (retain, nonatomic) id<AWEWorkspaceDraftLoadService> loadImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)saveWorkspace:(id)a0 video:(id)a1 scene:(long long)a2 isUserAction:(BOOL)a3 completion:(id /* block */)a4;
- (void)loadWorkspaceWithDraft:(id)a0 context:(id)a1 strategy:(long long)a2 completion:(id /* block */)a3;
- (void)loadProjectWithWorkspace:(id)a0 projectUUID:(id)a1 completion:(id /* block */)a2;
- (void)loadProjectWithWorkspace:(id)a0 projectDraft:(id)a1 completion:(id /* block */)a2;
- (void)loadWorkspaceWithDraftID:(id)a0 context:(id)a1 strategy:(long long)a2 completion:(id /* block */)a3;
- (void)saveProject:(id)a0 completion:(id /* block */)a1;
- (void)saveWorkspace:(id)a0 video:(id)a1 backup:(BOOL)a2 scene:(long long)a3 isUserAction:(BOOL)a4 completion:(id /* block */)a5;
- (void)saveWorkspace:(id)a0 video:(id)a1 backup:(BOOL)a2 modifiedHandler:(id /* block */)a3 scene:(long long)a4 isUserAction:(BOOL)a5 completion:(id /* block */)a6;
- (void)copyDraftFrom:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
- (void)clearUnreferencedResourcesWithDraftID:(id)a0 withCaller:(id)a1 completion:(id /* block */)a2;
- (void)clearUnreferencedResourcesOfBackupDraft:(id)a0 withCaller:(id)a1 completion:(id /* block */)a2;
- (id)executingDraftIDs;
- (void)loadProjectWithOriginWorkspace:(id)a0 projectUUID:(id)a1 completion:(id /* block */)a2;
- (void)clearAllEditBackupDraftsWithCaller:(id)a0 exceptDraft:(id)a1 completion:(id /* block */)a2;
- (void)deleteDraftWithID:(id)a0 completion:(id /* block */)a1;
- (void)UIApplicationWillTerminateNotification:(id)a0;
- (void)p_dequeueTask:(id)a0;
- (void)p_enqueueTask:(id)a0;
- (void)p_executeIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationDidBecomeActiveNotification:(id)a0;

@end
