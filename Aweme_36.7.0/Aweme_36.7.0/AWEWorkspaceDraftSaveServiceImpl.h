@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEWorkspaceDraftSaveServiceImpl : NSObject <AWEWorkspaceDraftSaveService>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queueSerial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveWorkspace:(id)a0 video:(id)a1 scene:(long long)a2 isUserAction:(BOOL)a3 completion:(id /* block */)a4;
- (void)saveProject:(id)a0 completion:(id /* block */)a1;
- (void)saveWorkspace:(id)a0 video:(id)a1 backup:(BOOL)a2 scene:(long long)a3 isUserAction:(BOOL)a4 completion:(id /* block */)a5;
- (void)saveWorkspace:(id)a0 video:(id)a1 backup:(BOOL)a2 modifiedHandler:(id /* block */)a3 scene:(long long)a4 isUserAction:(BOOL)a5 completion:(id /* block */)a6;
- (void)p_saveProjectImpl:(id)a0 completion:(id /* block */)a1;
- (void)saveWorkspace:(id)a0 video:(id)a1 backupFlag:(id)a2 modifiedHandler:(id /* block */)a3 scene:(long long)a4 isUserAction:(BOOL)a5 completion:(id /* block */)a6;
- (void)saveProjects:(id)a0 completion:(id /* block */)a1;
- (void)p_saveWorkspace:(id)a0 video:(id)a1 backup:(id)a2 presaveHandler:(id /* block */)a3 scene:(long long)a4 completion:(id /* block */)a5;
- (void)p_saveVideoDataWithProject:(id)a0 completion:(id /* block */)a1;
- (id)generateDraftWithRepository:(id)a0 error:(id *)a1;
- (void)storeExtensionModelsFor:(id)a0 with:(id)a1;
- (void).cxx_destruct;

@end
