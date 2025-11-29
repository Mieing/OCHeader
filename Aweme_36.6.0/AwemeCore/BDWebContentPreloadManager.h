@interface BDWebContentPreloadManager : NSObject

+ (BOOL)existPageCacheForURLString:(id)a0;
+ (void)preloadPageWithURLs:(id)a0 userAgent:(id)a1 useHttpCaches:(BOOL)a2;
+ (void)saveResponse:(id)a0 forURLString:(id)a1;
+ (void)preloadPageWithURLs:(id)a0 userAgent:(id)a1;
+ (id)fetchWebResourceSync:(id)a0;
+ (void)cancelTasks:(id)a0;

@end
