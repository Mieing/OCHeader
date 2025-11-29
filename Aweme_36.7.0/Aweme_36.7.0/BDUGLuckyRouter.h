@class NSString, NSMutableSet;

@interface BDUGLuckyRouter : NSObject <BDUGLuckyRouterProtocol>

@property (retain, nonatomic) NSMutableSet *pretaskIntercepterSet;
@property (retain, nonatomic) NSMutableSet *normalIntercepterSet;
@property (retain, nonatomic) NSMutableSet *finishIntercepterSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleUrl:(id)a0;
+ (BOOL)handleUrl:(id)a0;
+ (id)getIntercepterList;
+ (void)registPreTaskIntercepter:(id)a0;
+ (void)registNormalIntercepter:(id)a0;
+ (void)registFinishIntercepter:(id)a0;
+ (BOOL)handleUrl:(id)a0 extraParams:(id)a1;
+ (void)handleUrl:(id)a0 completion:(id /* block */)a1;
+ (void)handleUrl:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (id)viewControllerForSchema:(id)a0;
+ (id)viewControllerForSchema:(id)a0 extraParams:(id)a1;
+ (id)viewForSchema:(id)a0;
+ (id)viewForSchema:(id)a0 extraParams:(id)a1;
+ (id)resolveSchema:(id)a0;
+ (BOOL)isLocalUrl:(id)a0;
+ (BOOL)openExternalUrl:(id)a0;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)registAllIntercepter;
- (id)supportHostSet;
- (void)__trackerHandleContext:(id)a0 handle:(BOOL)a1 error:(id)a2;
- (id)buildRouterContext:(id)a0 extraParams:(id)a1 startTime:(double)a2 completion:(id /* block */)a3;
- (id)executeIntercepterWithContext:(id)a0;
- (id)__routerTrackParams;
- (id)dispatchContext:(id)a0 toIntercepter:(id)a1;
- (id)handleContext:(id)a0 withIntercepter:(id)a1;
- (BOOL)_handleUrl:(id)a0;
- (void)_handleUrl:(id)a0 completion:(id /* block */)a1;
- (id)_viewControllerForSchema:(id)a0;
- (void)_registIntercepterWithClass:(Class)a0;
- (void)_registPreTaskIntercepter:(id)a0;
- (void)_registNormalIntercepter:(id)a0;
- (void)_registFinishIntercepter:(id)a0;
- (BOOL)_canHandleUrl:(id)a0;
- (BOOL)_handleUrl:(id)a0 extraParams:(id)a1;
- (void)_handleUrl:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (id)_viewControllerForSchema:(id)a0 extraParams:(id)a1;
- (id)_viewForSchema:(id)a0 extraParams:(id)a1;
- (id)_resolveSchema:(id)a0;
- (BOOL)_isLocalUrl:(id)a0;
- (BOOL)_openExternalUrl:(id)a0;
- (id)_reDispatchWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
