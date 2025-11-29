@class NSString, DVEComplementaryFrameViewModel;

@interface DVEComplementaryFrameContext : NSObject <DVEComplementaryFrameContextProtocol>

@property (retain, nonatomic) DVEComplementaryFrameViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)complementFrameForCurrentTime:(double)a0 lastTime:(double)a1 direction:(unsigned long long)a2 timePerComplementaryFrame:(double)a3;
- (BOOL)isTimeValidForStartTime:(double)a0 targetTime:(double)a1 direction:(unsigned long long)a2;
- (id)createComplementaryFrameOperationWithTime:(double)a0 block:(id /* block */)a1;
- (id)addFrameOperationWithFrameTime:(double)a0 expectedStartTime:(double)a1 startBlock:(id /* block */)a2;
- (BOOL)p_complementFrameForCurrentTime:(double)a0 lastTime:(double)a1 direction:(unsigned long long)a2 timePerComplementaryFrame:(double)a3;
- (id)complementFramesForStartTime:(double)a0 targetTime:(double)a1 timePerComplementaryFrame:(double)a2 direction:(unsigned long long)a3;
- (BOOL)isTimeValid:(double)a0;
- (void)dispatchFrameOperations;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
