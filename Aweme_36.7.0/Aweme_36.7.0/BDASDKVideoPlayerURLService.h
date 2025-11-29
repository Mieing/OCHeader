@interface BDASDKVideoPlayerURLService : NSObject

+ (id)urlWithVideoID:(id)a0 categoryID:(id)a1 itemId:(id)a2 adID:(id)a3 authToken:(id)a4 base:(id)a5 businessToken:(id)a6;
+ (long long)currentTs;
+ (id)leTVSignFromVideoID:(id)a0 ts:(long long)a1;
+ (id)toutiaoUserKey;
+ (id)toutiaoPlayApi;
+ (id)baseToutiaoPlayApi;
+ (id)toutiaoAuthPlayApi;
+ (id)toutiaoPlayApiVersion;
+ (id)toutiaoSecretKey;
+ (id)MD5HashString:(id)a0;
+ (id)videoPlayPathBaseURL;
+ (id)mappedUrl:(id)a0;
+ (id)urlMapping;
+ (void)setDomainBlock:(id /* block */)a0;
+ (id)leTVUserKey;
+ (void)saveLeTVUserKey:(id)a0;
+ (id)leTVSecretKey;
+ (void)saveLeTVSecretKey:(id)a0;
+ (void)saveToutiaoUserKey:(id)a0;
+ (void)saveToutiaoSecretKey:(id)a0;
+ (id)videoType;
+ (id)baseURL;

@end
