@interface TencentLBSCalman : NSObject

@property (nonatomic) int minAccuracy;
@property (nonatomic) double q;
@property (nonatomic) double r;
@property (nonatomic) double x;
@property (nonatomic) double p;
@property (nonatomic) float Q_metres_per_second;
@property (nonatomic) long long TimeStamp_milliseconds;
@property (nonatomic) double variance;
@property (nonatomic) double lat;
@property (nonatomic) double lng;

- (id)init;
- (void)reset;
- (double)calmanDistancePredict:(double)a0;
- (void)calmanLocationPredictWithLat:(double)a0 lng:(double)a1 accuracy:(double)a2 timestamp:(long long)a3 speed:(double)a4;

@end
