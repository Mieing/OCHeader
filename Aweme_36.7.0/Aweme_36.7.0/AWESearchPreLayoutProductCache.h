@class NSCache;

@interface AWESearchPreLayoutProductCache : NSObject

@property (retain, nonatomic) NSCache *sharedCache;
@property (nonatomic) BOOL hasTriggeredPrelayout;

+ (id)sharedInstance;

- (void)clearAllCache;
- (id)getKeyFromSchema:(id)a0;
- (id)productForKey:(id)a0;
- (void)setProduct:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeForKey:(id)a0;

@end
