@class BDHybridFrameworkPageContext, NSString;

@interface SECBpeaPageEvent : SECHybridBaseEvent

@property (retain, nonatomic) BDHybridFrameworkPageContext *pageContext;
@property (copy, nonatomic) NSString *pageSession;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
