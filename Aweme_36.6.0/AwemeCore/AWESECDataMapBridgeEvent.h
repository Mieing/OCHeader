@class NSDictionary;

@interface AWESECDataMapBridgeEvent : SECHybridPiperEvent

@property (copy, nonatomic) NSDictionary *rulerParamsDict;

- (id)dictionaryWithRuleEngineParams:(id)a0;
- (id)initWithPiperContext:(id)a0;
- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
