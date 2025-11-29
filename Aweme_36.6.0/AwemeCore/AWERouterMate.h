@class NSCache;

@interface AWERouterMate : NSObject

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
