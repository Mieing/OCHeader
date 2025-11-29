@class NSTimer, RTVVoipModel, RxPromise;
@protocol RTVXREngine;

@interface RTVVoipStreamExceptionTask : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, nonatomic) double time;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (readonly, weak, nonatomic) id<RTVXREngine> engine;
@property (retain, nonatomic) RxPromise *schedulePromise;

- (id)initWithType:(unsigned long long)a0 voip:(id)a1 time:(double)a2;
- (id)initWithType:(unsigned long long)a0 voip:(id)a1 time:(double)a2 engine:(id)a3;
- (id)schedulePromiseAfterDelay:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
