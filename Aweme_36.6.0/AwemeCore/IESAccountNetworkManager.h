@interface IESAccountNetworkManager : NSObject

+ (id)commonRequestWithURL:(id)a0 Method:(id)a1 params:(id)a2 extraGetParams:(id)a3 completion:(id /* block */)a4;
+ (id)commonRequestAutoParseUserInfoWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 headerField:(id)a4 needHandlePictureVerify:(BOOL)a5 completion:(id /* block */)a6;
+ (id)commonRequestWithURL:(id)a0 Method:(id)a1 params:(id)a2 extraGetParams:(id)a3 headerField:(id)a4 needHandlePictureVerify:(BOOL)a5 completion:(id /* block */)a6;
+ (id)commonRequestAutoParseUserInfoWithURL:(id)a0 method:(id)a1 params:(id)a2 extraGetParams:(id)a3 completion:(id /* block */)a4;
+ (id)requestNewSessionWithSessionKey:(id)a0 installId:(id)a1 completion:(id /* block */)a2;

@end
