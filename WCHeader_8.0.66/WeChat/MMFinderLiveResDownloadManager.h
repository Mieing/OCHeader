@class MMFinderLiveResDownloader;

@interface MMFinderLiveResDownloadManager : NSObject

@property (retain, nonatomic) MMFinderLiveResDownloader *downloadManager;

- (id)init;
- (void)start:(id)a0 fileMD5:(id)a1 enforceIntegrityCheck:(BOOL)a2 pathManager:(id)a3 completion:(id /* block */)a4;
- (void)checkIsFileExist:(id)a0 enforceIntegrityCheck:(BOOL)a1 pathManager:(id)a2 completion:(id /* block */)a3;
- (void)realStart:(id)a0 downloadUrlMd5:(id)a1 fileMD5:(id)a2 pathManager:(id)a3 completion:(id /* block */)a4;
- (void)saveExtraData:(id)a0 forFileAtPath:(id)a1 completionBlock:(id /* block */)a2;
- (void)extractExtraDataAtPath:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
