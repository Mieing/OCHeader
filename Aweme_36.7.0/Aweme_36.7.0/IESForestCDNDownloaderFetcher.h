@class NSString, DownloadGlobalParameters;

@interface IESForestCDNDownloaderFetcher : IESForestBaseFetcher

@property (copy, nonatomic) NSString *downloadKey;
@property (retain, nonatomic) DownloadGlobalParameters *downloadParams;
@property (copy, nonatomic) id /* block */ completion;

+ (id)fetcherName;

- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)initDownloadParams;
- (void)p_setupDownloadingTaskCountMax;
- (void)p_setDownloadParamsWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)p_extractTTNetTrackInfo:(id)a0 response:(id)a1 result:(id)a2;
- (void)p_dispatchReadDataIfNeeded:(id)a0 downloadedFilePath:(id)a1 completion:(id /* block */)a2;
- (id)downloadFilePath:(id)a0;
- (void)p_readDataIfNeeded:(id)a0 downloadedFilePath:(id)a1 completion:(id /* block */)a2;
- (id)p_newDownloadFilePath:(id)a0;
- (id)p_oldDownloadFilePath:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)init;
- (void)cancelFetch;

@end
