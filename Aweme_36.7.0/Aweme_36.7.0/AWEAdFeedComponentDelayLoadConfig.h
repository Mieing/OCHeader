@interface AWEAdFeedComponentDelayLoadConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long delayTime;
@property (nonatomic) long long thresholdTime;
@property (nonatomic) BOOL useSlideSpeedModel;

- (id)init;

@end
