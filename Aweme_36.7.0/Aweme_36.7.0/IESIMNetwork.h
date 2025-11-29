@interface IESIMNetwork : NSObject

+ (id)createRequestWithBlock:(id /* block */)a0;
+ (id)requestWithRequest:(id)a0;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)postWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)getWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)downloadWithRequest:(id)a0;
+ (void)startDownloadRequst:(id)a0;
+ (void)cancelDownloadRequst:(id)a0 actionCallback:(id /* block */)a1;
+ (void)deleteDownloadRequst:(id)a0 actionCallback:(id /* block */)a1;
+ (void)queryDownloadInfoWithTaskID:(id)a0 downloadInfoBlock:(id /* block */)a1;
+ (void)queryDownloadInfoWithTask:(id)a0 downloadInfoBlock:(id /* block */)a1;
+ (id)requestWithFileName:(id)a0 url:(id)a1 bizlineTag:(id)a2 progressBlock:(id /* block */)a3 completeBlock:(id /* block */)a4;
+ (id)requestWithFileName:(id)a0 url:(id)a1 progressBlock:(id /* block */)a2 completeBlock:(id /* block */)a3;
+ (id)fileNameWithUrlString:(id)a0;
+ (id)uploadWithRequest:(id)a0;
+ (id)uploadWithRequest_V2:(id)a0;
+ (id)uploadWithRequestRequiringHttpResp:(id)a0;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 cacheStrategy:(unsigned long long)a3 cacheMaxAge:(double)a4 completion:(id /* block */)a5;
+ (Class)defaultJSONResponseSerializerClass;
+ (BOOL)needShowAWEApiErrorDescriptionWithError:(id)a0;
+ (id)networkErrorDomain;
+ (id)networkErrorKey;
+ (id)apiErrorDomain;
+ (id)apiErrorGetStatusMsgKey;
+ (Class)defaultRequestSerializerClass;
+ (id)getWithURLString:(id)a0 params:(id)a1 needCommonParams:(BOOL)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 responseBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (id)postWithURLString:(id)a0 params:(id)a1 needCommonParams:(BOOL)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 responseBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
+ (id)postWithURLString:(id)a0 params:(id)a1 responseBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;

@end
