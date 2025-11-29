@class NSString;

@interface AWEACCDownloadServiceImpl : HTSService <ACCDownloadServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 fixType:(long long)a2 headers:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 requestConfig:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 fixType:(long long)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 fixType:(long long)a2 headers:(id)a3 queuePriority:(long long)a4 insertRequestType:(long long)a5 progress:(id /* block */)a6 completion:(id /* block */)a7;
- (id)downloadFileWithURLString:(id)a0 targetPath:(id)a1 fixType:(long long)a2 headers:(id)a3 queuePriority:(long long)a4 insertRequestType:(long long)a5 requestConfig:(id /* block */)a6 progress:(id /* block */)a7 completion:(id /* block */)a8;

@end
