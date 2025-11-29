@class NSString;
@protocol AWEHPChannelDynamicSchedulingTimingStrategyProtocol;

@interface AWEHPChannelDynamicSchedulingStrategyContext : NSObject

@property (retain, nonatomic) id<AWEHPChannelDynamicSchedulingTimingStrategyProtocol> strategy;
@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) BOOL needReacquire;
@property (copy, nonatomic) NSString *channelID;

- (void).cxx_destruct;
- (id)description;

@end
