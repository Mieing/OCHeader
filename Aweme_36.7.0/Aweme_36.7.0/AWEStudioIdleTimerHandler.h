@interface AWEStudioIdleTimerHandler : NSObject

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ disableIdleTimerTrigger;

+ (id)idleTimerHandler;

- (void)disableIdleTimerIfNeeded;
- (void)restoreIdleTimerIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
