@class BDImageLruCache;

@interface IESGCPImageMemoryCache : NSObject

@property (retain, nonatomic) BDImageLruCache *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)imageForKey:(id)a0;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
