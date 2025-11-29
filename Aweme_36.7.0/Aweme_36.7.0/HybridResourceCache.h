@class NSCache;

@interface HybridResourceCache : NSObject

@property (nonatomic) long long size;
@property (retain, nonatomic) NSCache *sharedCache;

+ (id)getKeyFromParamConfig:(id)a0;
+ (id)sharedInstance;

- (void)setupWithSize:(long long)a0;
- (void)setResource:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeAll;
- (void)removeObjectForKey:(id)a0;
- (id)resourceForKey:(id)a0;

@end
