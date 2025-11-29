@class NSString, NSDictionary, IESLLLiveLynxView;
@protocol IESLiveHybridContainerProtocol, BDXBridgeContainerProtocol;

@interface IESLLLiveMessageSubscriber : NSObject <IESLLLiveMessageSubscriberProtocol>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *extra;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (weak, nonatomic) id<IESLiveHybridContainerProtocol> liveContainer;
@property (weak, nonatomic) IESLLLiveLynxView *lifeLynxView;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly, copy, nonatomic) NSString *bizId;
@property (readonly, nonatomic) BOOL isGlobalListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subscriberWithEventName:(id)a0 extra:(id)a1 callback:(id /* block */)a2;
+ (id)subscriberWithEventName:(id)a0 extra:(id)a1 lifeLynxView:(id)a2;
+ (id)subscriberWithEventName:(id)a0 extra:(id)a1 container:(id)a2;

- (BOOL)onReceiveMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
