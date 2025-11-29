@interface AWENearbyCommonGeckoAbility : NSObject

+ (void)updateGeckoConfigWithArray:(id)a0;
+ (unsigned long long)getGeckoIDWithChannel:(id)a0 accessKey:(id)a1;
+ (id)getSceneStringWithScene:(long long)a0;
+ (BOOL)getGeckoAbiblityEnable;
+ (id)getGeckoConfigArray;
+ (void)createGeckoTaskWithChannels:(id)a0;
+ (void)trackGeckoForceCDNWithChannel:(id)a0 geckoID:(unsigned long long)a1 accessKey:(id)a2 isFirstLoad:(BOOL)a3;
+ (void)trackGeckoUpdateResultWithChannel:(id)a0 result:(id)a1 accessKey:(id)a2;
+ (void)trackGeckoIDWithScene:(long long)a0;
+ (BOOL)isGeckoIDForbiddenWithChannel:(id)a0 isReuse:(BOOL)a1;
+ (void)createGeckoTaskWithAllChannels;

@end
