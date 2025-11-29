@interface IESLiveVideoURLService : NSObject

+ (long long)currentTs;
+ (id)MD5HashString:(id)a0;
+ (id)signFromVideoID:(id)a0 ts:(long long)a1;
+ (id)urlWithVideoId:(id)a0;
+ (id)urlForV1WithVideoId:(id)a0 businessToken:(id)a1;
+ (id)toutiaoVideoAPIVersion;
+ (id)toutiaoVideoUser;
+ (id)toutiaoVideoAPIURL;
+ (id)videoAPIURL;
+ (id)toutiaoVideoSecretKey;
+ (id)urlForV1WithVideoId:(id)a0;
+ (void)saveToutiaoVideoUserKey:(id)a0;
+ (void)saveToutiaoVideoSecretKey:(id)a0;
+ (id)baseURL;

@end
