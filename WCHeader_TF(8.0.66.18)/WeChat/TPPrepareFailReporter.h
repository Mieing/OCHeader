@class TPPlayerLogContext;

@interface TPPrepareFailReporter : TPBaseReporter

@property (retain, nonatomic) TPPlayerLogContext *logCtx;

- (id)init;
- (void)onEvent:(unsigned long long)a0 withEvent:(id)a1;
- (void)onPlayerError:(id)a0;
- (void).cxx_destruct;

@end
