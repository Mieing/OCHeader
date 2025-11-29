@interface MAVBlurEffect : MAVVLogEffect

@property (nonatomic) float radius;
@property (nonatomic) float sampleFactor;

- (long long)type;

@end
