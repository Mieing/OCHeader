@interface AWEUGCTopicPublishTrackBinder : NSObject

+ (id)trackParamsForPublishOuterFlow:(id)a0;
+ (id)trackParamsForPublishInnerFlow:(id)a0;
+ (id)commonParamsForContext:(id)a0;
+ (void)bindPublishProgressViewModuleContextTrackBlockWithParamsContext:(id)a0 forModuleContext:(id)a1 btm:(id)a2;
+ (void)onBindTopicBusiness:(id)a0 btm:(id)a1;
+ (void)trackOnPublishSuccess:(id)a0 btm:(id)a1;

@end
