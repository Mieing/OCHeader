@interface AWEIMChatListUpdateDebounceThrottle : NSObject

@property (nonatomic) double interval;
@property (nonatomic) double maxThresholdInterval;
@property (copy, nonatomic) id /* block */ debounceBlock;
@property (copy, nonatomic) id /* block */ throttleBlock;
@property (nonatomic) unsigned long long executeCount;

- (id)initWithInterval:(double)a0 maxThresholdInterval:(double)a1;
- (void)__debounceThrottle:(id /* block */)a0;
- (void)execute:(id /* block */)a0;
- (void)resetAll;
- (void).cxx_destruct;

@end
