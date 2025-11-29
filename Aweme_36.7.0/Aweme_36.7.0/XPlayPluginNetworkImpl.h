@class NSString;

@interface XPlayPluginNetworkImpl : NSObject <XPlayHostCustomNetworkPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (id)tempFileUrl;

- (id)commonParams;
- (void)appendSpecialHeaderIfNeeded:(id)a0;
- (id)requestHeaderField:(id)a0;
- (void)fixHeaderContentTypeField:(id)a0;
- (id)xplay_dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)xplay_preConnectUrl:(id)a0;
- (id)_dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
