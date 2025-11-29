@interface VeGameTouchDelayInfo : NSObject

@property (nonatomic) long long result;
@property (nonatomic) long long frameIndex;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL hasTouchDelay;
@property (nonatomic) long long minCheckId;
@property (nonatomic) long long maxCheckId;

@end
