@interface WCDeepLinkHandler : NSObject

+ (void)initialize;
+ (id)deepLinkByName:(id)a0;
+ (id)getDeepLinkNameFromUrl:(id)a0;
+ (id)deepLinkByUrl:(id)a0;
+ (BOOL)isDeepLink:(id)a0;
+ (BOOL)isActionCodeDeepLink:(id)a0;
+ (void)jumpDeepLink:(id)a0 animation:(BOOL)a1;
+ (void)jumpDeepLink:(id)a0;
+ (void)jumpDeepLinkWithoutBitSetControl:(id)a0 animation:(BOOL)a1;

@end
