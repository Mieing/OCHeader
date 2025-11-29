@interface ACCAIGCAsyncPostProcessTracker : NSObject

+ (void)appendRealTimeExtraParamsFromIdentifier:(id)a0 withNodeName:(id)a1 extraParams:(id /* block */)a2;
+ (void)startPostProcessSubStepTrackFromIdentifier:(id)a0 withNodeName:(id)a1 subStepEvent:(id)a2 subStepParams:(id)a3 businessParams:(id)a4;
+ (void)postProcessEndTrackWithIdentifier:(id)a0 withNodeName:(id)a1 businessParams:(id)a2;
+ (void)endPostProcessSubStepTrackFromIdentifier:(id)a0 withNodeName:(id)a1 subStepEvent:(id)a2 subStepParams:(id)a3 businessParams:(id)a4;
+ (void)appendPostProcessBusinessParamsFromIdentifier:(id)a0 withNodeName:(id)a1 businessParams:(id)a2;
+ (void)destroyTrackWithIdentifier:(id)a0 withNodeName:(id)a1;

@end
