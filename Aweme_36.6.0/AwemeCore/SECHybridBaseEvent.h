@class NSString;

@interface SECHybridBaseEvent : NSObject <SECBaseEvent>

@property (copy, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)eventType;
- (id)dictRepresentation;

@end
