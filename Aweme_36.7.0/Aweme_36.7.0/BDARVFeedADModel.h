@interface BDARVFeedADModel : NSObject

@property (nonatomic) long long adType;
@property (nonatomic) long long styleType;
@property (nonatomic) double scaleRate;

- (id)initWithAdType:(long long)a0 styleType:(long long)a1 scaleRate:(double)a2;

@end
