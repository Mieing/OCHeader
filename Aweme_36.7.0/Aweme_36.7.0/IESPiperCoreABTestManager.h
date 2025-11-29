@interface IESPiperCoreABTestManager : NSObject

@property (class, readonly, nonatomic) IESPiperCoreABTestManager *sharedManager;

@property (nonatomic, getter=shouldUseBridgeEngineV2) BOOL useBridgeEngineV2;
@property (nonatomic, getter=shouldMonitorJSBInvokeEvent) BOOL monitorJSBInvokeEvent;
@property (nonatomic, getter=shouldEnableIFrameJSB) BOOL enableIFrameJSB;
@property (nonatomic) BOOL iesBridgeEngineIframeNewLogicEnabled;
@property (nonatomic) BOOL iesBridgeEngineCallbackMessageUUID;
@property (nonatomic) BOOL shouldLogScript;
@property (nonatomic) BOOL shouldApplyExecutionOptimization;
@property (nonatomic) BOOL shouldApplyMapRegister;

- (id)init;

@end
