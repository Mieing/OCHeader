@class NSString;

@interface HMDCloudCommandNetworkIMP : NSObject <AWECloudCommandNetworkDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestWithUrl:(id)a0 method:(id)a1 params:(id)a2 requestHeaders:(id)a3 completion:(id /* block */)a4;
- (void)uploadWithUrl:(id)a0 data:(id)a1 requestHeaders:(id)a2 completion:(id /* block */)a3;

@end
