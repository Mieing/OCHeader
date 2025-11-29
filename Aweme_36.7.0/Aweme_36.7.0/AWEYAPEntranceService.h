@class NSString, NSMutableArray;

@interface AWEYAPEntranceService : HTSService <AWEYAPEntranceProcessStepDelegate, AWEYAPEntranceService>

@property (retain, nonatomic) NSMutableArray *handlerConfigs;
@property (retain, nonatomic) NSMutableArray *handlerRoutines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandleURL:(id)a0 userActivity:(id)a1;
- (BOOL)handleColdLaunchTaskWithLaunchOptions:(id)a0;
- (BOOL)handleBlockRuleWithURLString:(id)a0 userActivity:(id)a1;
- (void)doBeforeWindowInitWithLaunchOptions:(id)a0;
- (void)registerUniversalLinkHandler:(Class)a0 bizKey:(id)a1;
- (void)registerRouteURLString:(id)a0 handler:(Class)a1 bizKey:(id)a2;
- (void)endEntrance:(id)a0 success:(BOOL)a1;
- (id)allRoutine;
- (void)p_endEntrance:(id)a0 endType:(long long)a1;
- (id)p_targetConfigWithContext:(id)a0;
- (BOOL)p_handleWithContext:(id)a0;
- (id)p_getLaunchUrlWithLaunchOptions:(id)a0;
- (id)p_handleFromAWERouter:(id)a0;
- (id)routineFromContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
