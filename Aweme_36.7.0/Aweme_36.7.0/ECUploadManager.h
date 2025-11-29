@class NSString, EcUploadDispatch, EcNetworkManager, NSMutableDictionary, EcClient, NSObject, NSMutableSet, NSPointerArray;
@protocol EcTaskChangeProtocol, OS_dispatch_queue;

@interface ECUploadManager : NSObject <EcUploadDispatchDelegate, EcTaskChangeProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskMapping;
@property (retain, nonatomic) EcUploadDispatch *executer;
@property (retain, nonatomic) EcNetworkManager *networkManager;
@property (weak, nonatomic) EcClient *client;
@property (retain, nonatomic) NSPointerArray<EcTaskChangeProtocol> *delegateArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableSet *hasLoadFromDb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configTask:(id)a0;
- (id)getTaskByKey:(id)a0;
- (id)retryUploadTaskFromDB:(id)a0;
- (id)upload:(id)a0 dataList:(id)a1 complete:(id /* block */)a2;
- (void)pauseTask:(id)a0 complete:(id /* block */)a1;
- (void)resumeTask:(id)a0 complete:(id /* block */)a1;
- (void)cancelTask:(id)a0 complete:(id /* block */)a1;
- (void)pauseAll:(long long)a0 complete:(id /* block */)a1;
- (void)resumeAll:(long long)a0 complete:(id /* block */)a1;
- (void)retryTask:(id)a0 complete:(id /* block */)a1;
- (void)retryTask:(id)a0 assetId:(id)a1 complete:(id /* block */)a2;
- (void)getTaskState:(id)a0 complete:(id /* block */)a1;
- (void)getTaskItemState:(id)a0 assetId:(id)a1 complete:(id /* block */)a2;
- (void)deleteItemTask:(id)a0 assetId:(id)a1;
- (id)initWithNetworkManager:(id)a0 client:(id)a1;
- (void)handleNeedRemoveSourceFile;
- (id)getTaskProgress:(id)a0;
- (void)getUploadItemTask:(id)a0 complete:(id /* block */)a1;
- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
