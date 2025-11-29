@class NSString;

@interface SECHybridPiperDiscoveryEvent : SECHybridPiperEvent

@property (copy, nonatomic) NSString *protocolType;
@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSString *protocolHandler;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
