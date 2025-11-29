@class NSString;

@interface AWEWebViewUAManager : NSObject <AWEWebViewUAManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseCustomUserAgent;
+ (void)startUpdatingUserAgent;
+ (id)registerCustomUserAgent:(id)a0;
+ (id)appendExtraUAParams:(id)a0;
+ (id)mergeCustomUserAgent:(id)a0 withDefaultUA:(id)a1;
+ (id)fetchCachedUserAgent;
+ (id)fetchDefaultUA;
+ (id)defaultUAFromStorage;
+ (void)saveDefaultUAInStorage:(id)a0;
+ (id)cutToSystemUserAgentIfNeeded:(id)a0 withApplicationNameForUserAgent:(id)a1;
+ (id)fakeUA;


@end
