@class NSMutableDictionary, NSMutableArray;

@interface QOfflineMapDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;
@property (retain, nonatomic) NSMutableArray *downloadingItems;

- (void)downloadData:(id)a0 withURL:(id)a1 completion:(id /* block */)a2;
- (void)addOfflineDownloadItem:(id)a0;
- (void)removeOfflineDownloadItem:(id)a0;
- (void)cancelDownload:(id)a0;
- (void)removeDownloadTask:(id)a0;
- (id)getDownloadItems;
- (void)dowloadCDNOfflineConfig:(id)a0 completion:(id /* block */)a1;
- (void)saveOfflineItemZip:(id)a0 withItem:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
