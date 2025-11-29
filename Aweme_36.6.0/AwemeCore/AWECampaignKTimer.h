@interface AWECampaignKTimer : NSObject

+ (void)cancelTimerTaskWithIdentifier:(id)a0;
+ (id)executeTask:(id /* block */)a0 delay:(double)a1 interval:(double)a2 repeats:(BOOL)a3 async:(BOOL)a4;
+ (void)initialize;

@end
