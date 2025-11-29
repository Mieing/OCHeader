@class NSArray;

@interface SECHybridPreMatchEvent : SECHybridBaseEvent

@property (nonatomic) BOOL hasRules;
@property (copy, nonatomic) NSArray *rules;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
