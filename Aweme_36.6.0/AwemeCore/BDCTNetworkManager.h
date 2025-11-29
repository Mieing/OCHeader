@interface BDCTNetworkManager : NSObject

+ (void)requestForResponseWithUrl:(id)a0 method:(id)a1 params:(id)a2 binaryNames:(id)a3 binaryDatas:(id)a4 completion:(id /* block */)a5;
+ (void)requestForResponseWithUrl:(id)a0 method:(id)a1 params:(id)a2 binaryNames:(id)a3 binaryDatas:(id)a4 headerField:(id)a5 completion:(id /* block */)a6;
+ (void)requestForResponseWithUrl:(id)a0 method:(id)a1 params:(id)a2 binaryNames:(id)a3 binaryDatas:(id)a4 multiPart:(id)a5 headerField:(id)a6 completion:(id /* block */)a7;
+ (void)handleHttpData:(id)a0 response:(id)a1 error:(id)a2 callback:(id /* block */)a3;
+ (id)sysInfo;
+ (id)bytedPrepareSession:(id)a0 params:(id)a1 binaryDatas:(id)a2 binaryNames:(id)a3 method:(id)a4;
+ (id)bytedPrepareSession:(id)a0 params:(id)a1 binaryDatas:(id)a2 binaryNames:(id)a3 method:(id)a4 headerField:(id)a5;
+ (id)bytedPrepareSession:(id)a0 params:(id)a1 binaryDatas:(id)a2 binaryNames:(id)a3 multiPart:(id)a4 method:(id)a5 headerField:(id)a6;
+ (void)startRequest:(id)a0 callback:(id /* block */)a1;

@end
