@class NSString, FurionSmartEngineConfig;

@interface FurionSmartPitayaEngineRunner : NSObject <FurionSmartEngineRunnerProtocol>

@property (retain, nonatomic) FurionSmartEngineConfig *config;
@property (nonatomic) long long lastRunSdkCost;
@property (nonatomic) long long lastRunRetCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fillMonitorData:(id)a0 monitorType:(unsigned long long)a1;
- (void)updateOutputData:(id)a0 withOutputParams:(id)a1 inputParams:(id)a2;
- (void).cxx_destruct;
- (BOOL)isReady;
- (void)prepare;
- (BOOL)enabled;
- (id)initWithConfig:(id)a0;
- (id)engineConfig;

@end
