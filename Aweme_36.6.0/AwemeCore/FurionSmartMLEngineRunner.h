@class IESMLModel, FurionSmartEngineConfig, NSString;

@interface FurionSmartMLEngineRunner : NSObject <FurionSmartEngineRunnerProtocol>

@property (retain, nonatomic) FurionSmartEngineConfig *config;
@property (retain, nonatomic) IESMLModel *mlModel;
@property (nonatomic) BOOL preparing;
@property (nonatomic) long long enginePrepareCost;
@property (nonatomic) long long lastRunSdkCost;
@property (nonatomic) long long lastRunRetCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)predictWithInputParams:(id)a0 async:(BOOL)a1 completion:(id /* block */)a2;
- (void)fillMonitorData:(id)a0 monitorType:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isReady;
- (void)prepare;
- (BOOL)enabled;
- (id)initWithConfig:(id)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (id)engineConfig;

@end
