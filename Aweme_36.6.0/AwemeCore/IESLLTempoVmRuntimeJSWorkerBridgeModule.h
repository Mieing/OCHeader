@class JSWorkerBridge, NSString, NSDictionary, IESLLTempoContextStore, IESLLTempoVMRuntimeBridgeEngine;

@interface IESLLTempoVmRuntimeJSWorkerBridgeModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (copy, nonatomic) NSString *workerId;
@property (retain, nonatomic) JSWorkerBridge *xBridge;
@property (weak, nonatomic) IESLLTempoVMRuntimeBridgeEngine *bridgeEntry;
@property (weak, nonatomic) IESLLTempoContextStore *tempoContextStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
