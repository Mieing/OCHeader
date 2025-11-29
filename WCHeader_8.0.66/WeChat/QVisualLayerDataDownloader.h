@class NSMutableDictionary;

@interface QVisualLayerDataDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;

- (id)init;
- (void)downloadVisualLayerData:(id)a0 withURL:(id)a1 completion:(id /* block */)a2;
- (void)downloadModelLayerData:(id)a0 withURL:(id)a1 completion:(id /* block */)a2;
- (void)requestData:(id)a0 withRequestKey:(id)a1 completion:(id /* block */)a2;
- (void)cancelDownload:(id)a0;
- (void)removeDownloadTask:(id)a0;
- (id)getDownloadTaskFromKey:(id)a0;
- (void)sendVisLayerTaskCancellation:(id)a0;
- (void).cxx_destruct;

@end
