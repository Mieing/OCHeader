@class NSString, NSDictionary, NSArray;

@interface SECEventFlowEvent : NSObject <SECBaseEvent>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventSourceType;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSArray *eventTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDesc;
- (id)paramsForTagExpr;
- (id)eventDescWithParams:(BOOL)a0 tag:(id)a1;
- (void).cxx_destruct;
- (id)eventType;
- (BOOL)tagged;

@end
