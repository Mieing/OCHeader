@class NSString, NSNumber;

@interface SECHybridAPIContextNotFoundEvent : SECHybridBaseEvent

@property (copy, nonatomic) NSString *lynxViewURL;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *namescope;
@property (retain, nonatomic) NSNumber *hasRawData;
@property (retain, nonatomic) NSNumber *hasExtra;

- (void).cxx_destruct;
- (id)init;
- (id)eventType;
- (id)dictRepresentation;

@end
