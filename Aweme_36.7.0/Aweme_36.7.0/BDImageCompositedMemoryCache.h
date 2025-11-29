@class BDAnimatedImageMemoryCacheControl, BDLargeImageMemoryCacheControl, NSString;
@protocol BDMemoryCache;

@interface BDImageCompositedMemoryCache : NSObject <BDMemoryCache>

@property (nonatomic) BOOL enableLRUFlag;
@property (retain, nonatomic) id<BDMemoryCache> defaultCache;
@property (retain, nonatomic) id<BDMemoryCache> animatedImageCache;
@property (retain, nonatomic) id<BDMemoryCache> largeImageCache;
@property (retain, nonatomic) BDAnimatedImageMemoryCacheControl *animatedImageMemoryCacheControl;
@property (retain, nonatomic) BDLargeImageMemoryCacheControl *largeImageMemoryCacheControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnableLRU:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 isAnimatedImage:(BOOL)a3;
- (void)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
