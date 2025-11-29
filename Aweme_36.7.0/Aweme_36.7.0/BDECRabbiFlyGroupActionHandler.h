@class NSString, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyGroupActionHandler : NSObject <BDECRabbiFlyIActionHandler>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAction:(id)a0 action:(id)a1 callback:(id /* block */)a2;
- (id)initWithSupervisor:(id)a0;
- (void).cxx_destruct;

@end
