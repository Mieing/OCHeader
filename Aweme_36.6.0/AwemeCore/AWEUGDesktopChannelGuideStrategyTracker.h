@interface AWEUGDesktopChannelGuideStrategyTracker : NSObject

+ (void)trackMidGuideWithAction:(id)a0 params:(id)a1;
+ (void)trackIfNeededWithAction:(id)a0 params:(id)a1;
+ (void)trackActionResultWithParams:(id)a0 sceneUniqueKey:(id)a1;
+ (void)trackActionCountWithParams:(id)a0 needShow:(BOOL)a1 sceneUniqueKey:(id)a2;
+ (void)trackActionForServerWithAction:(id)a0 params:(id)a1;
+ (void)updateTrackActionResultWithParams:(id)a0;
+ (id)addParamsIfNeeded:(id)a0 uniqueKey:(id)a1;
+ (void)clearPreCheckRecord:(id)a0 uniqueKey:(id)a1;
+ (id)hasPreCheckMap;
+ (id)sceneUniqueKey:(id)a0 enterFrom:(id)a1;
+ (void)trackPreloadCountWithParams:(id)a0;
+ (void)trackPreloadResultWithParams:(id)a0;
+ (void)trackCheckCanShowCountWithParams:(id)a0;
+ (void)trackCheckCanShowResultWithParams:(id)a0 sceneUniqueKey:(id)a1;
+ (void)reportTrackActionResultIfNeed;
+ (id)buildTrackActionParamsWithModel:(id)a0 responseModel:(id)a1;
+ (void)trackDesktopGuideServerRequest:(id)a0;

@end
