@interface CSJLinkActionUtility : NSObject

+ (void)csj_openURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)csj_openURL:(id)a0;
+ (void)csj_postWillOpenURLNotification;
+ (void)csj_postDidOpenURLNotificationWith:(BOOL)a0;
+ (BOOL)csj_canOpenURL:(id)a0;

@end
