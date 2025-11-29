@interface BDXWebViewUAManager : NSObject

+ (id)baseCustomUserAgent;
+ (id)fetchCachedDefaultUserAgent;
+ (void)fetchDefaultUserAgent:(id /* block */)a0;
+ (id)customCurrenttUA;
+ (id)currentUserAgent;
+ (void)startUpdatingUserAgent;
+ (id)registerCustomUserAgent:(id)a0;
+ (id)appendExtraUAParams:(id)a0;
+ (id)deprecatedStoredUA;
+ (id)fetchOrUpdateUserAgentNowOnMainThread;
+ (void)setCustomDefaultUA:(id)a0;
+ (id)customDefaultUA;
+ (void)setCustomCurrenttUA:(id)a0;
+ (id)fetchOrUpdateUserAgentNow;

@end
