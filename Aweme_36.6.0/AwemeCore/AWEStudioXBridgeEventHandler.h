@interface AWEStudioXBridgeEventHandler : NSObject

+ (void)subscribeImpl;
+ (void)activity_preload_video:(id)a0;
+ (void)subscribeEventWithSEL:(SEL)a0;
+ (void)activity_preload_music:(id)a0;
+ (void)activity_preload_prop:(id)a0;
+ (void)activity_preload_mv:(id)a0;
+ (void)p_logInfo:(id)a0;
+ (void)p_logError:(id)a0;
+ (BOOL)p_containsKey:(id)a0 category:(SEL)a1;
+ (void)p_addKey:(id)a0 category:(SEL)a1;
+ (id)p_cacheDictionary;
+ (void)subscribe;

@end
