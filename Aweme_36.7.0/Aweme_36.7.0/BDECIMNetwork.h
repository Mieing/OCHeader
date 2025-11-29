@interface BDECIMNetwork : NSObject

+ (long long)networkReachabilityStatus;
+ (id)postURL:(id)a0 appendQuery:(id)a1;
+ (void)getWithURL:(id)a0 parameters:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (void)postTextWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
+ (void)postJsonWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
+ (void)upload:(id)a0 parameters:(id)a1 fileData:(id)a2 name:(id)a3 fileName:(id)a4 mimeType:(id)a5 progress:(id *)a6 completion:(id /* block */)a7;
+ (long long)networkCellularConnectionType;
+ (void)monitorServiceWithURLStr:(id)a0 response:(id)a1 jsonObj:(id)a2;
+ (void)getWithURL:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)postTextWithURL:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)postJsonWithURL:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)postFormWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
+ (id)userAgent;

@end
