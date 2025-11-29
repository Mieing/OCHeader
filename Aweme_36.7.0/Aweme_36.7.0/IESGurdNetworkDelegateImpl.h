@class NSString;

@interface IESGurdNetworkDelegateImpl : NSObject <IESGurdNetworkDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadPackageWithDownloadInfoModel:(id)a0 completion:(id /* block */)a1;
- (void)requestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)cancelDownloadWithIdentity:(id)a0;
- (void)addTTResponseFilterObject:(id /* block */)a0;
- (BOOL)canRetryWithStatusCode:(id)a0;
- (void)requestForBinaryWithURLString:(id)a0 completion:(id /* block */)a1;

@end
