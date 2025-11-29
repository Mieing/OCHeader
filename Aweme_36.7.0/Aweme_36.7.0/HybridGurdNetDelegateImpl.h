@class NSString;

@interface HybridGurdNetDelegateImpl : NSObject <IESGurdNetworkDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestWithMethod:(id)a0 URLString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)downloadPackageWithURLString:(id)a0 completion:(id /* block */)a1;
- (void)downloadPackageWithIdentity:(id)a0 URLString:(id)a1 completion:(id /* block */)a2;

@end
