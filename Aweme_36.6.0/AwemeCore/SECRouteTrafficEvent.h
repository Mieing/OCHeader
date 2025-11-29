@class NSString, SECRouteTrace, NSArray;

@interface SECRouteTrafficEvent : NSObject <SECInterestLogContent, SECRouteEventProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) double costTime;
@property (retain, nonatomic) SECRouteTrace *trace;
@property (copy, nonatomic) NSArray *traces;
@property (copy, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordStart;
- (void)recordEnd;
- (id)contentDescription;
- (void).cxx_destruct;
- (id)eventType;
- (id)traceId;

@end
