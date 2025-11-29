@interface AWEPlayerCacheHelper : NSObject

+ (BOOL)isH264Video:(id)a0;
+ (void)streamEditCacheFromPlayerWithAweme:(id)a0 destURL:(id)a1 enterFrom:(id)a2 forceCopy:(BOOL)a3 completion:(id /* block */)a4;
+ (void)cacheFromPlayerWithAweme:(id)a0 destURL:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
+ (void)getLocalH264VideoCacheFromAweme:(id)a0 destURL:(id)a1 completion:(id /* block */)a2;
+ (void)handlerSuccessCaseWithAweme:(id)a0 destURL:(id)a1 enterFrom:(id)a2 forceCopy:(BOOL)a3 completion:(id /* block */)a4 playerCacheStrategy:(unsigned long long)a5;
+ (void)handlerFailedCaseWithAweme:(id)a0 destURL:(id)a1 enterFrom:(id)a2 forceCopy:(BOOL)a3 completion:(id /* block */)a4 playerCacheStrategy:(unsigned long long)a5 error:(id)a6;
+ (BOOL)copyCacheFileToDestination:(id)a0 destinationURL:(id)a1;

@end
