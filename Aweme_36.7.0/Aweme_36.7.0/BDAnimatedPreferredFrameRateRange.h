@interface BDAnimatedPreferredFrameRateRange : NSObject

@property (nonatomic) float minimumRate;
@property (nonatomic) float maximumRate;
@property (nonatomic) float preferredRate;

+ (id)preferredFrameRateRangeWithMinimumRate:(float)a0 maximumRate:(float)a1 preferredRate:(float)a2;

@end
