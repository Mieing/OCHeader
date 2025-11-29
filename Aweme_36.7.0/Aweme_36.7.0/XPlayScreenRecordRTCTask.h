@class NSTimer;

@interface XPlayScreenRecordRTCTask : XPlayScreenRecordTask

@property (retain, nonatomic) NSTimer *timer;

- (void)didCompletion:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)query;
- (void)start;
- (void)dealloc;

@end
