@interface MMKPoint : NSObject

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;

+ (id)KPointWithX:(float)a0 y:(float)a1;

- (id)initWithX:(float)a0 y:(float)a1;
- (id)description;

@end
