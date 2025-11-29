@interface AWEInTodayPlayerRouter : NSObject

+ (id)trackPushEnterFrom;
+ (id)processParamsIfNeededWithOriginalDict:(id)a0;
+ (void)autoLandingTabIfNeededWithParamsDict:(id)a0 completion:(id /* block */)a1;
+ (void)normalJumpWithParamsDic:(id)a0 landingVC:(id)a1 transitionInfo:(id)a2;
+ (void)routeToEditorWithParams:(id)a0 transitionInfo:(id)a1;

@end
