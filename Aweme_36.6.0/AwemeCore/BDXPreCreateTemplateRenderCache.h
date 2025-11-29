@class NSCache;

@interface BDXPreCreateTemplateRenderCache : NSObject

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
