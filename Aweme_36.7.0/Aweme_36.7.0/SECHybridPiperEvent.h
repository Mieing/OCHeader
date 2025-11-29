@class NSString, SECHybridPiperContext;

@interface SECHybridPiperEvent : SECHybridBaseEvent

@property (retain, nonatomic) SECHybridPiperContext *piperContext;
@property (copy, nonatomic) NSString *pageSession;
@property (copy, nonatomic) NSString *piperSession;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
