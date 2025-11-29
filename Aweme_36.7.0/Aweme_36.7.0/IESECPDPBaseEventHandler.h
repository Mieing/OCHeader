@class NSString, _TtC14YataEventChain16EventChainBridge, NSDictionary, IESECPDPBaseEventServiceProvider;

@interface IESECPDPBaseEventHandler : NSObject <EventChainModifyContextObjCDelegate, EventChainErrorObjCDelegate, IESECSliceXEventForwardDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _TtC14YataEventChain16EventChainBridge *eventChain;
@property (retain, nonatomic) IESECPDPBaseEventServiceProvider *serviceProvider;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly, nonatomic) NSDictionary *bizParams;
@property (readonly, nonatomic) NSString *productType;
@property (nonatomic) double lastErrTime;
@property (nonatomic) double initTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)triggerSliceXEvent:(id)a0;
- (void)onEventChainError:(id)a0;
- (id)modifyContextParamsWithContext:(id)a0;
- (id)initWithBizCode:(id)a0;
- (void)handleSliceAction:(id)a0 activeView:(id)a1 source:(long long)a2;
- (void)reportErrWithAction:(id)a0 errCode:(long long)a1 message:(id)a2;
- (void)reportStateWithAction:(id)a0 info:(id)a1;
- (BOOL)uploadSwitch;
- (id)convertAction:(id)a0 chain:(id)a1 chainName:(id)a2;
- (id)convertActionToEvent:(id)a0;
- (void)dispatchEventChain:(id)a0 chainName:(id)a1 initialParams:(id)a2 passthrough:(id)a3;
- (id)actionBaseParams:(id)a0;
- (void)writeToALogWith:(id)a0;
- (void)registerInnerEvents;
- (void)handleSliceAction:(id)a0 activeView:(id)a1 path:(id)a2;
- (void)autoHandleSliceXEvent:(id)a0 activeView:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)setting;

@end
