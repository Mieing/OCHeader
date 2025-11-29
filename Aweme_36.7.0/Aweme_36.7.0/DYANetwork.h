@interface DYANetwork : NSObject

+ (void)GETJSONDictionary:(id)a0 parameters:(id)a1 headers:(id)a2 withResponseCompletion:(id /* block */)a3;
+ (void)POSTJSONDictionary:(id)a0 parameters:(id)a1 headers:(id)a2 withResponseCompletion:(id /* block */)a3;
+ (void)GET:(id)a0 parameters:(id)a1 headers:(id)a2 model:(Class)a3 completion:(id /* block */)a4;
+ (void)POST:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
+ (void)POSTJSONDictionary:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)GET:(id)a0 parameters:(id)a1 model:(Class)a2 completion:(id /* block */)a3;
+ (void)GETJSONDictionary:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)requestJSONWithMethod:(unsigned long long)a0 URLString:(id)a1 parameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
+ (id)transforToModel:(Class)a0 rawData:(id)a1 error:(id *)a2;
+ (void)POST:(id)a0 parameters:(id)a1 headers:(id)a2 model:(Class)a3 completion:(id /* block */)a4;
+ (void)_requestJSONWithMethod:(unsigned long long)a0 URLString:(id)a1 parameters:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
+ (BOOL)shouldAddSafeMobileRegisterToLogin:(id)a0;
+ (BOOL)shouldAddVCDLoginAccountParamWithUrl:(id)a0;
+ (void)processMiddleCheckWithURL:(id)a0 originalParams:(id)a1 error:(id)a2 rawData:(id)a3 method:(unsigned long long)a4 headers:(id)a5 response:(id)a6 completion:(id /* block */)a7;
+ (void)saveDirectLoginTicketWithResponse:(id)a0;
+ (void)processInterceptErrorHandleWithURL:(id)a0 error:(id)a1 originalParams:(id)a2 rawData:(id)a3 method:(id)a4 headers:(id)a5 response:(id)a6 completion:(id /* block */)a7;
+ (void)injectProcessMiddleCheckWithURL:(id)a0 originalParams:(id)a1 error:(id)a2 rawData:(id)a3 method:(id)a4 headers:(id)a5 response:(id)a6 completion:(id /* block */)a7;

@end
