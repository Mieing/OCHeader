@class SECHybridPageContext, NSDictionary, NSString;

@interface SECHybridPageEvent : SECHybridBaseEvent

@property (retain, nonatomic) SECHybridPageContext *pageContext;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (copy, nonatomic) NSString *pageSession;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
