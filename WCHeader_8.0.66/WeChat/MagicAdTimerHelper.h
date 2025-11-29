@interface MagicAdTimerHelper : NSObject

@property (nonatomic) unsigned long long activeTime;

- (id)init;
- (void)start;
- (unsigned long long)stop;
- (unsigned long long)endAndReturnTimeInMs;

@end
