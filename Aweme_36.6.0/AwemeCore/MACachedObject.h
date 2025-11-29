@class NSString, NSDate;

@interface MACachedObject : NSObject

@property (readonly, nonatomic) id cachedObject;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) struct MATile { unsigned int x; unsigned int y; short zoom; } tile;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)cacheObject:(id)a0 forTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a1 withCacheKey:(id)a2;

- (id)initWithObject:(id)a0 forTile:(struct MATile { unsigned int x0; unsigned int x1; short x2; })a1 withCacheKey:(id)a2;
- (void).cxx_destruct;
- (void)touch;
- (id)description;

@end
