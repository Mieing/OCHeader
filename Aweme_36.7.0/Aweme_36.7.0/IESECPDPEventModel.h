@class NSString, NSDictionary, IESECSliceAction, IESECPDPNextEventModel;

@interface IESECPDPEventModel : MTLModel <EventChainEvent, MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) IESECPDPNextEventModel *next;
@property (copy, nonatomic) NSString *eventControlFlow;
@property (retain, nonatomic) NSDictionary *fields;
@property (retain, nonatomic) IESECSliceAction *sourceAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)eventControlFlowExpr;
- (id)fieldsParams;
- (id)nextEvent;
- (void).cxx_destruct;
- (id)eventName;

@end
