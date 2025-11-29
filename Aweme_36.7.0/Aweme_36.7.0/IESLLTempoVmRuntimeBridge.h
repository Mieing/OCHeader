@class NSString, IESLLTempoContextStore;

@interface IESLLTempoVmRuntimeBridge : NSObject <IESLLTempoVMBridge>

@property (weak, nonatomic) IESLLTempoContextStore *contextStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getParams;
- (id)getBridgeModuleName;
- (Class)getModuleClass;
- (id)initWithContextStore:(id)a0;
- (void).cxx_destruct;

@end
