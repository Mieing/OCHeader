@class NSDictionary, BFAppLink;

@interface BFAppLinkNavigation : NSObject

@property (copy, nonatomic) NSDictionary *extras;
@property (copy, nonatomic) NSDictionary *appLinkData;
@property (retain, nonatomic) BFAppLink *appLink;

+ (id)resolveAppLinkInBackground:(id)a0 resolver:(id)a1;
+ (id)navigateToURLInBackground:(id)a0 resolver:(id)a1;
+ (long long)navigateToAppLink:(id)a0 error:(id *)a1;
+ (id)navigationWithAppLink:(id)a0 extras:(id)a1 appLinkData:(id)a2;
+ (id)callbackAppLinkDataForAppWithName:(id)a0 url:(id)a1;
+ (id)resolveAppLinkInBackground:(id)a0;
+ (id)navigateToURLInBackground:(id)a0;
+ (long long)navigationTypeForLink:(id)a0;
+ (void)setDefaultResolver:(id)a0;
+ (id)defaultResolver;

- (id)stringByEscapingQueryString:(id)a0;
- (id)appLinkURLWithTargetURL:(id)a0 error:(id *)a1;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)a0 error:(id)a1 type:(long long)a2;
- (long long)navigate:(id *)a0;
- (void).cxx_destruct;
- (long long)navigationType;

@end
