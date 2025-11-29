@class NSTimer, NSMutableSet;

@interface AWEVideoDiskCacheDeleteManager : NSObject

@property (retain, nonatomic) NSMutableSet *shouldDeleteCacheSet;
@property (retain, nonatomic) NSMutableSet *usingCacheSet;
@property (retain, nonatomic) NSTimer *deleteTimer;

+ (void)shouldDeleteCacheForKey:(id)a0;
+ (void)_deleteCachesSafely;
+ (void)startUseCacheForKey:(id)a0;
+ (void)endUseCacheForKey:(id)a0;
+ (id)usingCacheItems;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
