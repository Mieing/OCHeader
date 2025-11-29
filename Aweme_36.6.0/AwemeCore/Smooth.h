@interface Smooth : NSObject

@property (nonatomic) long long mean;
@property (nonatomic) long long m2;
@property (nonatomic) long long count;
@property (readonly, nonatomic) float smooth;

- (id)init;
- (void)update:(long long)a0;
- (void)reset;

@end
