@class BDHybridFrameworkAPIContext, NSString;

@interface SECBpeaPiperEvent : SECHybridBaseEvent

@property (retain, nonatomic) BDHybridFrameworkAPIContext *piperContext;
@property (copy, nonatomic) NSString *pageSession;
@property (copy, nonatomic) NSString *piperSession;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
