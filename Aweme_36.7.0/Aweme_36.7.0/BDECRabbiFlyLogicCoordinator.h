@class NSString, BDECRabbiFlyBFFLogic, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyLogicCoordinator : NSObject <BDECRabbiFlyIBFFLogic, BDECRabbiFlyIClientResponse>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) BDECRabbiFlyBFFLogic *bffLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSupervisor:(id)a0;
- (void)sendEventWithDynamicModel:(id)a0 event:(id)a1 data:(id)a2;
- (void)callActionWithDynamicView:(id)a0 action:(id)a1;
- (void)onCall:(id)a0 token:(id)a1 bridgeName:(id)a2 data:(id)a3 callback:(id /* block */)a4 extra:(id)a5;
- (void)onUpdateData:(id)a0 token:(id)a1 data:(id)a2 code:(long long)a3 message:(id)a4 reason:(id)a5 seqNo:(id)a6;
- (void)resume:(id)a0;
- (void).cxx_destruct;
- (void)stop:(id)a0;
- (void)processData:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;

@end
