@interface IESLiveAnchorPFNetworkHandler : IESLiveAnchorPFBaseHandler

@property (nonatomic) long long currentState;

- (void)initializeParams;
- (void)networkStateWillChangeFrom:(long long)a0 to:(long long)a1;
- (long long)computeNetworkState;
- (void)compareNetworkStateWithOldState:(long long)a0 newState:(long long)a1;
- (void)networkConnectionTypeDidChanged:(id)a0;
- (void)initializeNetworkState;
- (void)didLoad;
- (void)addObservers;
- (void)didUnload;

@end
