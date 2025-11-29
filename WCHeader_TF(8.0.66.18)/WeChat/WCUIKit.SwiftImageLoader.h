@class _TtC7WCUIKit16SwiftImageLoader;

@interface WCUIKit.SwiftImageLoader : NSObject

@property (class, nonatomic, readonly) _TtC7WCUIKit16SwiftImageLoader *shared;

+ (BOOL)enabled;
+ (BOOL)enabledHead;
+ (unsigned long long)removeAllCache;
+ (void)removeAllMemoryCache;
+ (void)removeMemoryCacheTo:(double)a0;
+ (id)cacheBaseDirectory;
+ (id)cachedDataFor:(id)a0;
+ (BOOL)hasCachedWithUrl:(id)a0;
+ (id)makeImagePathFor:(id)a0;
+ (id)requestKeyFor:(id)a0;
+ (void)removeMemoryCacheFor:(id)a0;
+ (void)saveDataFor:(id)a0 data:(id)a1;
+ (void)saveImageFor:(id)a0 image:(id)a1 data:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
