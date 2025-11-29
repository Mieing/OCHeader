@interface IESAccountNetwork : NSObject

+ (void)handleResponse:(id)a0 error:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)commonRequestWithURL:(id)a0 method:(id)a1 params:(id)a2 headers:(id)a3 completion:(id /* block */)a4;
+ (void)commonRequestForPostWithPath:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)commonRequestForGetWithPath:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)requestJSONWithMethod:(id)a0 path:(id)a1 parameters:(id)a2 headers:(id)a3 needHandlePictureVerify:(BOOL)a4 completion:(id /* block */)a5;
+ (void)requestJSONWithMethod:(id)a0 URLString:(id)a1 parameters:(id)a2 headers:(id)a3 needHandlePictureVerify:(BOOL)a4 completion:(id /* block */)a5;
+ (id)checkAndCorrectPath:(id)a0;
+ (void)commonRequestForGetWithPath:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (void)commonRequestForPostWithPath:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;

@end
