@class TTHttpTask, NSString;

@interface AWEGurdNetworkDelegateImpl : NSObject <IESGurdNetworkDelegate>

@property (retain, nonatomic) TTHttpTask *currentDownloadTask;
@property (copy, nonatomic) NSString *currentDownloadIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_downloadPackageWithDownloadInfoModel:(id)a0 completion:(id /* block */)a1;
- (void)_requestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)downloadPackageWithDownloadInfoModel:(id)a0 completion:(id /* block */)a1;
- (void)requestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)cancelDownloadWithIdentity:(id)a0;
- (id)currentNetworkConnectionString;
- (id)checkIPAddressVersion:(id)a0;
- (void).cxx_destruct;

@end
