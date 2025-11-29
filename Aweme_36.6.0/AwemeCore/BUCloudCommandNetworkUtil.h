@interface BUCloudCommandNetworkUtil : NSObject

+ (void)requestWithUrl:(id)a0 requestMethod:(long long)a1 params:(id)a2 requestHeaders:(id)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
+ (void)uploadMultiDataWithUrl:(id)a0 dataArray:(id)a1 params:(id)a2 commonParams:(id)a3 requestHeaders:(id)a4 success:(id /* block */)a5 failure:(id /* block */)a6;
+ (void)uploadDataWithUrl:(id)a0 fileName:(id)a1 fileType:(id)a2 data:(id)a3 params:(id)a4 commonParams:(id)a5 mimeType:(id)a6 requestHeaders:(id)a7 success:(id /* block */)a8 failure:(id /* block */)a9;
+ (void)requestWithUrl:(id)a0 method:(id)a1 params:(id)a2 requestHeaders:(id)a3 completion:(id /* block */)a4;
+ (id)_requestUrlWithParams:(id)a0 baseUrl:(id)a1;
+ (id)_requestWithUrl:(id)a0 requestMethod:(id)a1 requestHeaders:(id)a2;
+ (id)_requestBodyWithParams:(id)a0;
+ (void)uploadWithUrl:(id)a0 data:(id)a1 requestHeaders:(id)a2 completion:(id /* block */)a3;
+ (void)_dealWithResultData:(id)a0 ran:(id)a1 error:(id)a2 url:(id)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
+ (id)_uploadRequestBodyWithMultiData:(id)a0 params:(id)a1 commonParams:(id)a2;
+ (void)initialize;

@end
