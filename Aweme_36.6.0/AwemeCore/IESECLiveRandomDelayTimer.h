@class NSTimer, NSMutableDictionary;

@interface IESECLiveRandomDelayTimer : NSObject

@property (retain, nonatomic) NSTimer *delayTimer;
@property (retain, nonatomic) NSMutableDictionary *delayTimerManager;

- (void)startRandomTimerWithMin:(long long)a0 maxLimit:(long long)a1 uniqueKey:(id)a2 completion:(id /* block */)a3;
- (void)startRandomTimerWithDuration:(long long)a0 completion:(id /* block */)a1;
- (void)startDelayRequestWithType:(id)a0 completion:(id /* block */)a1;
- (void)startRandomTimerWithMin:(long long)a0 maxLimit:(long long)a1 completion:(id /* block */)a2;
- (long long)arc4randomFrom:(long long)a0 to:(long long)a1;
- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;

@end
