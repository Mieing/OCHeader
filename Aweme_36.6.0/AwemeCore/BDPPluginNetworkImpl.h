@class NSString;

@interface BDPPluginNetworkImpl : NSObject <BDPHostCustomNetworkPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (id)tempFileUrl;
+ (void)bootstrapLaunch;

- (id)commonParams;
- (void)appendSpecialHeaderIfNeeded:(id)a0;
- (id)requestHeaderField:(id)a0;
- (void)fixHeaderContentTypeField:(id)a0;
- (id)bdp_dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)bdp_preConnectUrl:(id)a0;
- (id)needToAddParamsWithParams:(id)a0;
- (id)_dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
