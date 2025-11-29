@class ArgusStrategyEngine;

@interface ArgusAspectVerifyHandler : NSObject

@property (copy, nonatomic) id /* block */ argusBizContainerIdObtainer;
@property (retain, nonatomic) ArgusStrategyEngine *strategyEngine;

- (id)getContainerConfig;
- (id)argusBizContainerId;
- (id)triggerVerify:(long long)a0 callerParams:(id)a1 afterVerifyCallback:(id /* block */)a2;
- (id)initWithStrategyEngine:(id)a0 bizContainerIdObtainer:(id /* block */)a1;
- (id)triggerVerify:(long long)a0 callerParams:(id)a1;
- (void).cxx_destruct;

@end
