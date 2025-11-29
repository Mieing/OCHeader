@interface BDASplashRequest : NSObject

+ (void)tryFetchAdInfoWithParam:(id)a0;
+ (void)fetchAdInfoWithParams:(id)a0 requestConfig:(id)a1;
+ (void)tryFetchAdInfo;
+ (void)trySendStockWithParams:(id)a0 type:(long long)a1;
+ (void)fetchAdInfoWithParams:(id)a0;
+ (id)getRequestInfo;
+ (void)sendAckWithModel:(id)a0 completion:(id /* block */)a1;
+ (id)urlHost;
+ (void)splashRequestWithQueries:(id)a0 params:(id)a1 type:(long long)a2 responseBlock:(id /* block */)a3;
+ (void)trySendStockWithPath:(id)a0 Params:(id)a1 type:(long long)a2;
+ (id)splashRequestParams;
+ (id)splashRequestUrlWithQueries:(id)a0;

@end
