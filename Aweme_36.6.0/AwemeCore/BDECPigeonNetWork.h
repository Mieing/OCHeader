@interface BDECPigeonNetWork : NSObject

+ (void)getWithURL:(id)a0 parameters:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (id)finalParamsWithParams:(id)a0 requestCommonParamsBlock:(id /* block */)a1;
+ (void)getWithURL:(id)a0 parameters:(id)a1 belongeClient:(id)a2 completion:(id /* block */)a3;
+ (void)upload:(id)a0 parameters:(id)a1 fileData:(id)a2 name:(id)a3 fileName:(id)a4 mimeType:(id)a5 progress:(id *)a6 belongeClient:(id)a7 completion:(id /* block */)a8;
+ (void)postJsonWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 headers:(id)a3 belongeClient:(id)a4 completion:(id /* block */)a5;
+ (void)postJsonWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 belongeClient:(id)a3 completion:(id /* block */)a4;
+ (id)getPigeonClientConfigWithIMClient:(id)a0;
+ (void)postFormWithURL:(id)a0 parameters:(id)a1 queryParameters:(id)a2 belongeClient:(id)a3 completion:(id /* block */)a4;

@end
