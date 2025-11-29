@class SECEventFlowSceneDetectAggrResult;

@interface SECRouteEventFlowDetector : NSObject

@property BOOL detected;
@property (retain) SECEventFlowSceneDetectAggrResult *sceneResult;

+ (id)queueForSceneDetct;
+ (void)attachDetectorForTrace:(id)a0;

- (void)startDetectForTrace:(id)a0;
- (void).cxx_destruct;

@end
