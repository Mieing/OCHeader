@interface AWELiveXPlayGameAPI : NSObject

- (id)xtokenRequestHost;
- (id)openAPIBaseURL;
- (void)requestXTokensInfoWithXPlayId:(id)a0 completion:(id /* block */)a1;
- (void)requestOpenApiTokenWithAppId:(id)a0 roomId:(id)a1 needRtcInfo:(BOOL)a2 isRevertLive:(id)a3 completion:(id /* block */)a4;

@end
