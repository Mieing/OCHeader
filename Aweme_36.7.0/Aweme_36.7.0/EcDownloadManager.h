@class NSMutableDictionary, EcTaskExecute, NSPointerArray, NSString, EcClient;

@interface EcDownloadManager : NSObject <EcTaskChangeProtocol>

@property (weak, nonatomic) EcClient *client;
@property (retain, nonatomic) NSMutableDictionary *downloadTaskDict;
@property (retain, nonatomic) EcTaskExecute *execute;
@property (retain, nonatomic) NSPointerArray *handleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completeDownloadModel:(id)a0;
- (void)addDownloadModel:(id)a0;
- (void)addChangeDelegate:(id)a0;
- (void)removeChangeDelegate:(id)a0;
- (void)downloadAssetIds:(id)a0 tagId:(unsigned long long)a1 downloadFolder:(id)a2 complete:(id /* block */)a3;
- (void)getDownloadTaskState:(id)a0 complete:(id /* block */)a1;
- (id)getTaskProgress:(id)a0;
- (void)cancelDownloadTask:(id)a0 complete:(id /* block */)a1;
- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end
