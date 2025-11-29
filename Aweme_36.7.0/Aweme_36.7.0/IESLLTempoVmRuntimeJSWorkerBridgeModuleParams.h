@class IESLLTempoVMRuntimeBridgeEngine, NSDictionary;

@interface IESLLTempoVmRuntimeJSWorkerBridgeModuleParams : NSObject

@property (retain, nonatomic) IESLLTempoVMRuntimeBridgeEngine *bridgeEngine;
@property (retain, nonatomic) NSDictionary *param;

- (void).cxx_destruct;

@end
