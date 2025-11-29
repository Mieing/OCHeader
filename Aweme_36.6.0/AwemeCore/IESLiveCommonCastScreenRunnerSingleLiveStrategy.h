@class IESLiveCommonCastScreenRunnerApi;

@interface IESLiveCommonCastScreenRunnerSingleLiveStrategy : IESLiveCommonCastScreenRunnerBaseStrategy

@property (retain, nonatomic) IESLiveCommonCastScreenRunnerApi *runnerApi;

- (void)startCastWithComplete:(id /* block */)a0;
- (void)stopCastWithComplete:(id /* block */)a0;
- (void)uploadCastScreenStatus:(BOOL)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
