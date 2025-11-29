@class HMDThreadSafeDictionary;

@interface AWEIMGCDTimerManager : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *timerContainer;

+ (id)sharedInstance;

- (void)cancelTimerWithName:(id)a0;
- (void)scheduleTimerWithName:(id)a0 timeInterval:(double)a1 queue:(id)a2 repeats:(BOOL)a3 action:(id /* block */)a4;
- (BOOL)existTimer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
