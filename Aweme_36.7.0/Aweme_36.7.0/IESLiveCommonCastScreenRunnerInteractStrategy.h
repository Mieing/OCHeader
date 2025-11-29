@class IESLiveCommonCastScreenRunnerApi;

@interface IESLiveCommonCastScreenRunnerInteractStrategy : IESLiveCommonCastScreenRunnerBaseStrategy

@property (retain, nonatomic) IESLiveCommonCastScreenRunnerApi *runnerApi;

- (void)startCastWithComplete:(id /* block */)a0;
- (void)stopCastWithComplete:(id /* block */)a0;
- (void).cxx_destruct;

@end
