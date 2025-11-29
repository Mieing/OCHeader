@class NSNumber;

@interface AWESearchDoubleColumnPlayConfiguration : NSObject

@property (nonatomic) double timeInterval;
@property (nonatomic) double activeTop;
@property (nonatomic) double activeBottom;
@property (nonatomic) double activeRatio;
@property (nonatomic) double inactiveTop;
@property (nonatomic) double inactiveBottom;
@property (nonatomic) double inactiveRatio;
@property (nonatomic) double balance;
@property (nonatomic) double speedLimit;
@property (nonatomic) double decelerateLimit;
@property (nonatomic) double scrollViewYOffset;
@property (retain, nonatomic) NSNumber *disablePlayOnScroll;
@property (retain, nonatomic) NSNumber *playDelayTime;

- (void).cxx_destruct;
- (id)init;

@end
