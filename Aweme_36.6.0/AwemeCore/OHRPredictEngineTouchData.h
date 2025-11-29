@class NSArray;

@interface OHRPredictEngineTouchData : NSObject

@property (nonatomic) double majorRadius;
@property (nonatomic) double majorRadiusTolerance;
@property (nonatomic) double screenWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) NSArray *originTouchEvents;
@property (retain, nonatomic) NSArray *sampledTouchEvents;
@property (nonatomic) long long touchDataBuildTimeMs;

- (void).cxx_destruct;

@end
