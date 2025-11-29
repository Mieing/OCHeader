@class NSString, SECRouteTrace;

@interface SECRouteExternalManager : NSObject <SECRouteExternalTrafficControl>

@property (retain, nonatomic) SECRouteTrace *buffer;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL sceneStackEnabled;
@property (nonatomic) BOOL eventFlowDetectAllEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SQRIDWithURLString:(id)a0;

- (id)recordCheckinTraffic:(id)a0 withBizToken:(id)a1;
- (id)recordCheckoutTraffic:(id)a0 withBizToken:(id)a1;
- (BOOL)hostAndPathisEqual:(id)a0 with:(id)a1;
- (id)tryToConsumeTraffic:(id)a0;
- (id)checkin:(id)a0 withBizToken:(id)a1;
- (id)checkout:(id)a0 withBizToken:(id)a1;
- (void)trafficDidTerminated:(id)a0 withBizToken:(id)a1;
- (void).cxx_destruct;

@end
