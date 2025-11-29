@class NSString;

@interface BDMannorAbilityManager : NSObject <BDMannorAbilityProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseRulesFromRaw:(id)a0;
+ (void)sendTrackWithTrackConfig:(id)a0 areaKey:(id)a1 eventName:(id)a2 dynamicParams:(id)a3;
+ (void)sendTrackV3WithTrackConfig:(id)a0 areaKey:(id)a1 eventName:(id)a2 dynamicParams:(id)a3;
+ (void)requestFeedbackReportInfoWith:(id)a0;
+ (void)reportFeedbackInfoWithParams:(id)a0 completionHandler:(id /* block */)a1;
+ (void)showFeedbackViewWithModel:(id)a0 logExtra:(id)a1 completionHandler:(id /* block */)a2;
+ (void)requestDislikeWithParams:(id)a0 completionHandler:(id /* block */)a1;
+ (void)requestFeedbackReportInfo;
+ (void)trackAdShowEventWith:(id)a0 componentType:(id)a1 lifecycle:(long long)a2;
+ (void)trackCoreEventReportWith:(id)a0 logExtra:(id)a1 params:(id)a2 watchedDuration:(long long)a3;


@end
