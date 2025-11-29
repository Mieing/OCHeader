@class NSString, EventChainEventContextBridge;

@interface IESECEventChainActionEvent : NSObject <IESECEventChainActionEventProtocol>

@property (retain, nonatomic) EventChainEventContextBridge *ctx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sliceID;
- (id)originDictionary;
- (id)initWithEventContext:(id)a0;
- (id)actionMonitorID;
- (id)inheritedParams;
- (void)setInheritedParams:(id)a0;
- (void).cxx_destruct;
- (id)fields;
- (id)next;
- (id)type;
- (id)path;
- (id)activeView;

@end
