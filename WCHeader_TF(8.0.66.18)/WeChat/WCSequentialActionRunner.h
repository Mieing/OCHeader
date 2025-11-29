@class NSMutableArray, UIView;

@interface WCSequentialActionRunner : NSObject

@property (retain, nonatomic) NSMutableArray *actionArr;
@property (nonatomic) long long curActionIdx;
@property (nonatomic) BOOL fastForwarded;
@property (weak, nonatomic) UIView *rootView;

- (id)init;
- (void)addAnimateWithDuration:(double)a0 animations:(id /* block */)a1;
- (void)addAnimateWithDuration:(double)a0 options:(unsigned long long)a1 animations:(id /* block */)a2;
- (void)addCallBlock:(id /* block */)a0;
- (void)addDelayWithDuration:(double)a0;
- (void)sequentialRun;
- (void)runAction;
- (void)runNext;
- (void)fastForward;
- (void).cxx_destruct;

@end
