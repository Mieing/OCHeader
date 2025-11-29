@class AWEResourceDownloaderTTNetAdapter;

@interface AWEResourceDownloader : NSObject

@property (retain) AWEResourceDownloaderTTNetAdapter *networkAdapter;

+ (id)sharedInstance;

- (id)downloadAndSaveFileWithURLs:(id)a0 channel:(id)a1 identify:(id)a2 savePath:(id)a3 logDic:(id)a4 needCookie:(BOOL)a5 progress:(id /* block */)a6 completion:(id /* block */)a7;
- (id)downloadFileWithURLs:(id)a0 channel:(id)a1 identify:(id)a2 savePath:(id)a3 index:(long long)a4 logDic:(id)a5 needCookie:(BOOL)a6 progress:(id /* block */)a7 completion:(id /* block */)a8;
- (void)callCompletionBlock:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
