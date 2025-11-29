@class NSString;
@protocol AWECloudCommandNetworkDelegate;

@interface AWECloudCommandNetworkHandler : NSObject <AWECloudCommandNetworkDelegate>

@property (retain) id<AWECloudCommandNetworkDelegate> networkDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestWithUrl:(id)a0 method:(id)a1 params:(id)a2 requestHeaders:(id)a3 completion:(id /* block */)a4;
- (id)_requestUrlWithParams:(id)a0 baseUrl:(id)a1;
- (id)_requestWithUrl:(id)a0 requestMethod:(id)a1 requestHeaders:(id)a2;
- (id)_requestBodyWithParams:(id)a0;
- (void)uploadWithUrl:(id)a0 data:(id)a1 requestHeaders:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
