@class NSString;

@interface AWEComponentsPriorityUtils : HTSService <AWEComponentsPriorityUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priorityTypeWithAwemeModel:(id)a0 sceneType:(long long)a1 extraInfo:(id)a2 useTemplateAnchor:(BOOL)a3;
+ (id)priorityTypeWithAwemeModel:(id)a0 sceneType:(long long)a1 extraInfo:(id)a2;
+ (void)registerPriorityConfig:(Class)a0;
+ (id)priorityTypeWithAwemeModel:(id)a0 sceneType:(long long)a1;
+ (BOOL)isHigherPriorityForComponent:(id)a0 toComponent:(id)a1;
+ (id)registerConfigs;
+ (void)runOnceForLazyRegister;
+ (id)anchorPriorityList;
+ (BOOL)enableFeedCommonAnchorVisibilityOpt;


@end
