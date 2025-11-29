@interface BDImageConfigUtil : NSObject

+ (id)decodeWithBase64Str:(id)a0;
+ (id)responseData:(id)a0 data:(id)a1 error:(id)a2 mappingClass:(Class)a3;
+ (id)responseData:(id)a0 data:(id)a1 error:(id)a2;
+ (struct __SecKey { } *)addPublicKey:(id)a0;
+ (void)networkAsyncRequestForURL:(id)a0 headers:(id)a1 method:(id)a2 queue:(id)a3 callback:(id /* block */)a4;
+ (id)defaultHeaderFieldWithAppID:(id)a0;
+ (id)commonParametersWithConfig:(id)a0;
+ (id)bdImageJSONRepresentation:(id)a0;
+ (BOOL)verify:(id)a0 signature:(id)a1 withPublicKey:(id)a2;
+ (void)networkAsyncRequestV2ForURL:(id)a0 headers:(id)a1 method:(id)a2 queue:(id)a3 mappingClass:(Class)a4 callback:(id /* block */)a5;
+ (id)decodeDomain:(id)a0;
+ (id)URLQueryAllowedCharacterSet;
+ (id)sha256:(id)a0;

@end
