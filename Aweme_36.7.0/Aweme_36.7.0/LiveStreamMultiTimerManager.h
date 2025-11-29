@class NSLock, NSMutableDictionary;

@interface LiveStreamMultiTimerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *timerList;
@property (retain, nonatomic) NSLock *lock;

+ (id)manager;

- (void)cancelTimerWithName:(id)a0;
- (void)schedualTimerWithIdentifier:(id)a0 interval:(double)a1 queue:(id)a2 repeats:(BOOL)a3 action:(id /* block */)a4;
- (void)schedualTimerWithIdentifier:(id)a0 interval:(double)a1 runNow:(BOOL)a2 queue:(id)a3 repeats:(BOOL)a4 action:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (void)cancelAllTimers;

@end
