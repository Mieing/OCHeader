@class BDECRabbiFlyDynamicSupervisor;
@protocol BDECRabbiFlyIJSWorker;

@interface BDECRabbiFlyClientResponseJSModuleParam : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (weak, nonatomic) id<BDECRabbiFlyIJSWorker> jsWorker;

- (void).cxx_destruct;

@end
