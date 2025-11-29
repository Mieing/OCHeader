@interface DVERulerModel : NSObject

@property (nonatomic) long long count;
@property (nonatomic) double interval;
@property (nonatomic) double reference;

- (id)initWithCount:(long long)a0 interval:(double)a1 reference:(double)a2;

@end
