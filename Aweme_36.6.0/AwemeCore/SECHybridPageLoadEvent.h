@class SECHybridPageContext, NSDictionary, NSString;

@interface SECHybridPageLoadEvent : SECHybridBaseEvent

@property (retain, nonatomic) SECHybridPageContext *pageContext;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (copy, nonatomic) NSString *pageSession;
@property (copy, nonatomic) NSString *pageLoadType;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
