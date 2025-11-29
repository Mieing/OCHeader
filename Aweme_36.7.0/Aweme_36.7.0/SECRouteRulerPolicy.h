@class NSString;

@interface SECRouteRulerPolicy : NSObject <SECRoutePolicyProtocol>

@property (nonatomic) BOOL useEventFlowEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mergeSceneInfoFromPickedParams:(id)a0 hitSFWScene:(id)a1 rulerParams:(id)a2;
+ (id)queryItemsWithDecoding:(id)a0;
+ (id)pickParams:(id)a0 rulerParams:(id)a1;
+ (void)initialize;

- (id)protect:(id)a0;
- (id)riskLevelOf:(id)a0;
- (id)sceneDetect:(id)a0;
- (id)executeRulerSource:(id)a0 withTraffic:(id)a1;
- (id)executeSceneRulerSource:(id)a0 withTraffic:(id)a1;
- (id)rulerParamsOfTrace:(id)a0;

@end
