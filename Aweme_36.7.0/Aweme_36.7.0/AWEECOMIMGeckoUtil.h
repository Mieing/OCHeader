@interface AWEECOMIMGeckoUtil : NSObject

+ (void)preloadDefaultChannelList;
+ (void)preloadWithResourceURLList:(id)a0;
+ (id)defaultChannelList;
+ (void)preloadWithChannelList:(id)a0;
+ (void)preloadWithResourceURL:(id)a0;
+ (id)sharedForestKit;
+ (id)getPrefixURL;
+ (id)getNewCDNUrlWithChannel:(id)a0 bundle:(id)a1;

@end
