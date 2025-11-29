@interface TTSpeedMonitor : NSObject

@property char hitCountMax;
@property char realHitCount;
@property long long speedThrottle;
@property (copy) id /* block */ onSwitch;

- (void)inputSpeedSample:(long long)a0;
- (id)initWithParam:(char)a0 speedThrottle:(long long)a1 onSwitch:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
