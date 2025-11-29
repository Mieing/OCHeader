@class NSDictionary, FBSDKAppLink;
@protocol FBSDKAppLinkResolving;

@interface FBSDKAppLinkNavigation : NSObject

@property (class, retain, nonatomic) id<FBSDKAppLinkResolving> defaultResolver;

@property (copy, nonatomic) NSDictionary *extras;
@property (copy, nonatomic) NSDictionary *appLinkData;
@property (retain, nonatomic) FBSDKAppLink *appLink;
@property (readonly, nonatomic) long long navigationType;

+ (id)navigationWithAppLink:(id)a0 extras:(id)a1 appLinkData:(id)a2;
+ (id)callbackAppLinkDataForAppWithName:(id)a0 url:(id)a1;
+ (void)resolveAppLink:(id)a0 resolver:(id)a1 handler:(id /* block */)a2;
+ (void)resolveAppLink:(id)a0 handler:(id /* block */)a1;
+ (void)navigateToURL:(id)a0 handler:(id /* block */)a1;
+ (void)navigateToURL:(id)a0 resolver:(id)a1 handler:(id /* block */)a2;
+ (long long)navigateToAppLink:(id)a0 error:(id *)a1;
+ (long long)navigationTypeForLink:(id)a0;

- (id)stringByEscapingQueryString:(id)a0;
- (id)appLinkURLWithTargetURL:(id)a0 error:(id *)a1;
- (long long)navigate:(id *)a0;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)a0 error:(id)a1 type:(long long)a2;
- (void).cxx_destruct;

@end
