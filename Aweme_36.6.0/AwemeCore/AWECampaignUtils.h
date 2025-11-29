@class NSString;

@interface AWECampaignUtils : NSObject <AWECampaignUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isADs:(id)a0;
+ (id)storageKeyForCurrentUserWithKey:(id)a0;
+ (unsigned long long)compareTime:(long long)a0 inTimeRange:(id)a1;
+ (id)pathForResource:(id)a0 ofType:(id)a1 outbundle:(id *)a2 withRemoteResBundle:(id)a3;
+ (void)downloadLottieFileUrlString:(id)a0 md5:(id)a1 creatCacheCompletion:(id /* block */)a2 withCompletion:(id /* block */)a3;
+ (id)lottieNamed:(id)a0 withBundle:(id)a1;


@end
