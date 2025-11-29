@class NSString, SECRouteTrace, SECHybridPageTrace;

@interface SECWebViewSafetyEvent : NSObject <SECInterestLogContent, SECRouteEventProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) double costTime;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) SECRouteTrace *nativeTrace;
@property (retain, nonatomic) SECHybridPageTrace *pageTraffic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordStart;
- (void)recordEnd;
- (id)contentDescription;
- (void).cxx_destruct;
- (id)eventType;

@end
