@class NSString;
@protocol AWEUGSceneServiceDelegate, AWEUGCampaignTaskEvadeSceneProtocol;

@interface AWEUGTaskSceneService : NSObject <AWEUGSceneServiceProtocol>

@property (retain, nonatomic) NSString *currentScene;
@property (retain, nonatomic) id<AWEUGCampaignTaskEvadeSceneProtocol> sceneEvade;
@property (weak, nonatomic) id<AWEUGSceneServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)sceneDidAppeared:(id)a0;
- (void)getSceneAndCheck;
- (void)sceneDidDisappeared:(id)a0;
- (void)webSceneDidDisappeared:(id)a0;
- (BOOL)isSatisfiedScene:(id)a0;
- (void)webviewDidReloadContext:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
