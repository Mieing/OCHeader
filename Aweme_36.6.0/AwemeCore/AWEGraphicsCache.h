@class NSCache, NSMapTable;

@interface AWEGraphicsCache : NSObject

@property (class, readonly, nonatomic) AWEGraphicsCache *sharedInstance;

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMapTable *imageWeakTable;

- (void)cacheImage:(id)a0 forLayer:(id)a1;
- (id)imageForLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
