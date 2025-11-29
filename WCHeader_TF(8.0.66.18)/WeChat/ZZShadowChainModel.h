@class ZZShadowModel;

@interface ZZShadowChainModel : NSObject

@property (readonly, nonatomic) ZZShadowModel *object;

- (id /* block */)offset;
- (id /* block */)color;
- (id /* block */)radius;
- (id /* block */)opacity;
- (void).cxx_destruct;

@end
