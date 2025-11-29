@class NSString, IESLLTempoVMRuntimeInstance;

@interface IESLLTempoVMEventReceiver : NSObject <IESLLTempoVmRuntimeEventReceiver>

@property (weak, nonatomic) IESLLTempoVMRuntimeInstance *vmRuntime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEvent:(id)a0;
- (id)initWithVmRuntime:(id)a0;
- (void).cxx_destruct;

@end
