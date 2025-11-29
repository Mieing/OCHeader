@class NSTimer, DitoAnchorPageSchedulerConfig;

@interface DitoAnchorPageScheduler : NSObject

@property (retain, nonatomic) DitoAnchorPageSchedulerConfig *config;
@property (retain, nonatomic) NSTimer *timer;

- (void)cancelScheduler;
- (void)startSchedulerWith:(double)a0 checker:(id /* block */)a1 reposition:(id /* block */)a2 finish:(id /* block */)a3;
- (BOOL)checkLocation:(double)a0 checker:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
