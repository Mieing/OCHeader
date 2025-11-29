@class NSTimer, TIMXGCDTimer;

@interface TIMXPerUserPuller : TIMXSingleStrategyPullerDefault

@property (retain, nonatomic) NSTimer *timer;
@property BOOL needsPull;
@property BOOL pulling;
@property (retain) TIMXGCDTimer *pullTimer;
@property double pullStartTime;

- (void)appEnterForeground:(id)a0;
- (void)setNeedsPullWithReason:(long long)a0;
- (void)tokenChanged:(id)a0;
- (void)wsStateChangedToConnected:(id)a0;
- (void)pollingPull:(BOOL)a0;
- (void)pullFired:(id)a0;
- (void)updatePullerCursorWithResponse:(id)a0;
- (void)pull;
- (void).cxx_destruct;
- (void)kickoff;
- (void)dealloc;
- (id)sharedOperationQueue;

@end
