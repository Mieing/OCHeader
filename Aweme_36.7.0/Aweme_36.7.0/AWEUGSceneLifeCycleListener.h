@class NSString;

@interface AWEUGSceneLifeCycleListener : AWEUGSceneBaseListener <AWEUGUndertakeMessage>

@property (copy, nonatomic) NSString *sceneType;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)sceneDisappear:(id)a0;
- (id)initWithSceneType:(id)a0;
- (void)trackLogWithMessage:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)dealloc;

@end
