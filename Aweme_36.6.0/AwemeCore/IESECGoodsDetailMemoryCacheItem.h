@interface IESECGoodsDetailMemoryCacheItem : NSObject

@property (nonatomic) double timeout;
@property (nonatomic) double cacheTime;
@property (retain, nonatomic) id object;
@property (readonly, nonatomic) BOOL expired;

- (void).cxx_destruct;
- (id)init;

@end
