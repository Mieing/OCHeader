@interface LarkShareApi : NSObject

+ (void)setAppScheme:(id)a0;
+ (BOOL)handleOpenURL:(id)a0 delegate:(id)a1;
+ (id)sharedStoreModel;
+ (BOOL)sendRequest:(id)a0 prepareDelegate:(id)a1;
+ (id)appStoreURLOfLark;
+ (id)dictionaryWithUrlString:(id)a0;
+ (BOOL)isLarkSupportOpenAPI;
+ (BOOL)isAppInstalled;
+ (void)setDisplayName:(id)a0;
+ (BOOL)sendRequest:(id)a0;

@end
