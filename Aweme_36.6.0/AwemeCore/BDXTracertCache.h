@class NSCache;

@interface BDXTracertCache : NSObject

@property (retain, nonatomic) NSCache *sharedCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
