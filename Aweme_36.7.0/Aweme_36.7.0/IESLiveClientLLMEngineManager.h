@class NSString, IESLiveClientLLMMonitor;

@interface IESLiveClientLLMEngineManager : NSObject

@property (retain, nonatomic) IESLiveClientLLMMonitor *monitor;
@property (nonatomic) long long llmEngineState;
@property (copy, nonatomic) NSString *currentSceneModel;
@property (nonatomic) BOOL anchorRisk;
@property (copy, nonatomic) NSString *anchorRiskReason;
@property (nonatomic) BOOL perfRisk;
@property (copy, nonatomic) NSString *perfRiskReason;

- (void)startLLMEngine:(id)a0;
- (void)predownloadModelWithSceneModelName:(id)a0 completion:(id /* block */)a1;
- (void)preloadModelEngineWithSceneModelName:(id)a0 completion:(id /* block */)a1;
- (void)releaseModelEngineWithSceneModelName:(id)a0 completion:(id /* block */)a1;
- (void)setupLLMEnvironmentForSceneModel:(id)a0;
- (void)releaseLLMEnvironmentForSceneModel:(id)a0;
- (void).cxx_destruct;
- (id)errorWithDescription:(id)a0;
- (id)init;

@end
