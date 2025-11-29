@class NSTimer;

@interface AWEAIGCBusinessScheduleProgress : NSObject

@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double progress;
@property (nonatomic) BOOL progressFinished;

- (void)scheduledTimer;
- (void)addProgressBlcok:(id /* block */)a0;
- (void).cxx_destruct;
- (void)finished;
- (void)startProgress;

@end
