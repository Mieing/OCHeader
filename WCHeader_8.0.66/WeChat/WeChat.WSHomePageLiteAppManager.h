@interface WeChat.WSHomePageLiteAppManager : NSObject

+ (id)routeItemFor:(unsigned long long)a0;
+ (void)preloadMainSearchPageWithScene:(unsigned long long)a0 forceDarkMode:(BOOL)a1;
+ (void)preloadLiteAppSearchPageWithScene:(unsigned long long)a0;
+ (void)releaseSearchPageWithScene:(unsigned long long)a0;
+ (void)preloadSearchTeachDataWithScene:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
