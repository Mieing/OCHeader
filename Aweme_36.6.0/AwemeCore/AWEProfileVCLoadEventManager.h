@interface AWEProfileVCLoadEventManager : NSObject

+ (id)profileCustomNetStageEventWithRequests:(id)a0 baseTime:(double)a1;
+ (id)profileCustomDetailStageStatisWithTrace:(id)a0 extraParams:(id)a1;
+ (id)addCustomStageEventWithRequest:(id)a0 prefix:(id)a1 baseTime:(double)a2;
+ (void)addCustomStageEventWithRequest:(id)a0 dict:(id)a1 prefix:(id)a2 baseTime:(double)a3;
+ (id)profileImageStatisWithTrace:(id)a0;
+ (id)profileBannerLoadPerfWithTrace:(id)a0 perfParams:(id)a1;

@end
