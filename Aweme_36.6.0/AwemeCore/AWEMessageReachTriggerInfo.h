@class NSString;

@interface AWEMessageReachTriggerInfo : NSObject

@property (copy, nonatomic) NSString *source;
@property (nonatomic) long long latestTriggerTime;
@property (nonatomic) long long triggerCount;

- (void).cxx_destruct;

@end
