@class NSMutableDictionary;

@interface QAOILayerMarkerEngine : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;

- (id)init;
- (void)requestAOILayerData:(id)a0 completion:(id /* block */)a1;
- (void)downloadPOIIconImage:(id)a0 completion:(id /* block */)a1;
- (id)constructURLString:(id)a0 withID:(id)a1;
- (void)removeDownloadTask:(id)a0;
- (void)removeRequestTask:(id)a0;
- (void).cxx_destruct;

@end
