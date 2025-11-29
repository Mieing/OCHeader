@interface BDTTNetPreloadManager : NSObject

+ (void)requestForBinaryWithResponse:(id)a0 callback:(id /* block */)a1;
+ (void)requestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 requestSerializer:(Class)a5 responseSerializer:(Class)a6 timeoutInterval:(double)a7 retryCount:(unsigned long long)a8 onlyWiFi:(BOOL)a9 callback:(id /* block */)a10;
+ (void)requestForJSONWithResponse:(id)a0 callback:(id /* block */)a1;
+ (void)requestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 requestSerializer:(Class)a5 responseSerializer:(Class)a6 callback:(id /* block */)a7;
+ (void)requestForBinaryWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 requestSerializer:(Class)a5 responseSerializer:(Class)a6 callback:(id /* block */)a7;
+ (void)requestForBinaryWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 requestSerializer:(Class)a5 responseSerializer:(Class)a6 timeoutInterval:(double)a7 retryCount:(unsigned long long)a8 callback:(id /* block */)a9;

@end
