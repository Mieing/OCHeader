@class NSMutableDictionary, NSMutableArray;

@interface LOTAnimationCache : NSObject {
    NSMutableDictionary *animationsCache_;
    NSMutableArray *lruOrderArray_;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)disableCaching;
- (void)clearCache;
- (void)removeAnimationForKey:(id)a0;
- (id)animationForKey:(id)a0;

@end
