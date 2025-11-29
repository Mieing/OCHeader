@class NSString, IESECPDPBaseEventHandler;

@interface IESECEventChainBaseEventImpl : NSObject <EventChainEventObjCImpl>

@property (weak, nonatomic) IESECPDPBaseEventHandler *eventHandler;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bizCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleWithEventCtx:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithEventHandler:(id)a0;

@end
