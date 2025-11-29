@interface AWEPushApplicationControllerImplSilent : NSObject

+ (id)specialBadge;
+ (void)clearSpecialBadge;
+ (void)impl_pushHandlerWithContent:(id)a0 completionHandler:(id /* block */)a1 coldLaunch:(BOOL)a2;
+ (void)storeSpecialBadge:(id)a0;

@end
