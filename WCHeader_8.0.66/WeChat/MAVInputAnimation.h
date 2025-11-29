@interface MAVInputAnimation : NSObject

@property (nonatomic) long long startMs;
@property (nonatomic) long long endMs;
@property (nonatomic) long long interpolator;

- (id)init;

@end
