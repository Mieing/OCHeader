@class NSString, NSMutableDictionary, NSURLSession;

@interface BDPMetaServiceRequester : NSObject {
    NSString *_devicePlatform;
    NSString *_hostVersion;
    NSMutableDictionary *_requestingTasks;
}

@property (nonatomic) long long hostId;
@property (retain, nonatomic) NSURLSession *session;

+ (void)setHookMetaUrl:(id)a0;
+ (void)setHookBatchMetaUrl:(id)a0;
+ (void)setHookRequestHeader:(id)a0 removeExited:(BOOL)a1;
+ (void)setHookRequestParams:(id)a0 removeExited:(BOOL)a1;

- (id)requestMetaWithRequestInfo:(id)a0;
- (id)requestBatchMetaWithAppIds:(id)a0 isAutoRequest:(BOOL)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void)cancelAllMetaRequest;
- (id)pkgExperimentWithInfo:(id)a0;
- (id)adExperiment;
- (id)requestAppMetaWithInfo:(id)a0 retryTask:(id)a1 engineType:(unsigned long long)a2;
- (void)handleTask:(id)a0 requestInfo:(id)a1 response:(id)a2 data:(id)a3 error:(id)a4 beginDate:(id)a5 beginTime:(long long)a6 isTTNet:(BOOL)a7;
- (id)requestGameMetaFromCDN:(id)a0 requestInfo:(id)a1;
- (void)retryTask:(id)a0 withRequestInfo:(id)a1;
- (id)requestMetaFromCDN:(id)a0 withRequestInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
