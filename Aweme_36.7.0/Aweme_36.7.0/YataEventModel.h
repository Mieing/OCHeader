@class NSString, NSDictionary, YataNextChainProtocolModel;

@interface YataEventModel : MTLModel <EventChainEvent, MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) YataNextChainProtocolModel *next;
@property (copy, nonatomic) NSString *eventControlFlow;
@property (nonatomic) unsigned long long eventControlFlowType;
@property (retain, nonatomic) NSDictionary *fields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)nextJSONTransformer;
+ (id)fieldsJSONTransformer;
+ (id)eventControlFlowJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)eventControlFlowExpr;
- (id)fieldsParams;
- (id)nextEvent;
- (id)eventID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)eventName;

@end
