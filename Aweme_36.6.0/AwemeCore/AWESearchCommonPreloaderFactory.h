@class NSDictionary;

@interface AWESearchCommonPreloaderFactory : NSObject

@property (class, readonly, copy, nonatomic) NSDictionary *preloadSceneMap;

+ (id)preloaderWithScene:(unsigned long long)a0;

@end
