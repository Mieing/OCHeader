@interface DAVTTNetworkManager : NSObject

+ (id)requestForBinaryWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 timeoutSeconds:(unsigned long long)a6 progress:(id *)a7 callback:(id /* block */)a8;

@end
