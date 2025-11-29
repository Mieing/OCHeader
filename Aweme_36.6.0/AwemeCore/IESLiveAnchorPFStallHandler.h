@class NSDictionary;

@interface IESLiveAnchorPFStallHandler : IESLiveAnchorPFBaseHandler

@property (nonatomic) long long currentState;
@property (copy, nonatomic) NSDictionary *stallConfig;

- (void)processBasePerfInfo:(id)a0;
- (void)initializeParams;
- (long long)computeStallStateWithStreamFps:(long long)a0;
- (void)compareStallStateWithOldState:(long long)a0 newState:(long long)a1;
- (void)stallStateWillChangeFrom:(long long)a0 to:(long long)a1;
- (id)defaultStallConfig;
- (void)initializeStallState;
- (void).cxx_destruct;
- (void)didLoad;

@end
