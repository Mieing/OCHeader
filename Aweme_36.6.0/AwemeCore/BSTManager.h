@interface BSTManager : NSObject

+ (void)setupWithConfig:(id)a0;
+ (void)forbiddenBubbleForView:(id)a0;
+ (id)bstInjectLynxWithUniqueKey:(id)a0;
+ (void)clearViewStatusCacheOfResponder:(id)a0;
+ (void)addBstABConfig:(id)a0;
+ (void)bindView:(id)a0 withContext:(id)a1;
+ (void)sendEventType:(id)a0 withView:(id)a1 context:(id)a2;
+ (void)registerExposureHandler:(id /* block */)a0 forView:(id)a1;
+ (void)registerClickHandler:(id /* block */)a0 forView:(id)a1;
+ (void)autoShowTrackWithContext:(id)a0;
+ (void)clickTrackWithContext:(id)a0;
+ (void)checkEventName:(id)a0 params:(id)a1;

@end
