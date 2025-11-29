@class NSString;

@interface AWEWebViewUAConfigDouyinAdapter : NSObject <AWEWebViewUAConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deprecatedStoredUA;
+ (id)fetchOrUpdateUserAgentNowOnMainThread;
+ (id)fetchOrUpdateUserAgentNow;
+ (id)fetchCachedUserAgent;
+ (id)baseUserAgent;
+ (id)fetchSystemUserAgent;


@end
