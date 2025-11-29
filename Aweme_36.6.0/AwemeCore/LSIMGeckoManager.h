@interface LSIMGeckoManager : NSObject

+ (id)dataForPath:(id)a0 channel:(id)a1;
+ (id)imageForPath:(id)a0 channel:(id)a1;
+ (id)geckoCDNBaseURL;
+ (id)geckoCDNPrefixWithChannelName:(id)a0;
+ (void)fetchIMResourcesWhenFirstEnter;
+ (id)imageForPath:(id)a0 fallbackURL:(id *)a1;

@end
