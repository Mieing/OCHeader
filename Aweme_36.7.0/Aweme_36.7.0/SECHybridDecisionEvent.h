@class SECDecisionResult, SECDecisionContext;

@interface SECHybridDecisionEvent : SECHybridBaseEvent

@property (retain, nonatomic) SECDecisionResult *result;
@property (retain, nonatomic) SECDecisionContext *context;

- (id)desWithActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
