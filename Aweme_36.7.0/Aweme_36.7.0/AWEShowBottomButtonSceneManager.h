@class NSMutableDictionary, NSMutableArray;
@protocol AWEShowBottomButtonSceneProtocol, AWEShowBottomButtonPluginHubProtocol;

@interface AWEShowBottomButtonSceneManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *registeredSceneConfigs;
@property (retain, nonatomic) NSMutableArray *activeScenes;
@property (weak, nonatomic) id<AWEShowBottomButtonPluginHubProtocol> hub;
@property (readonly, nonatomic) id<AWEShowBottomButtonSceneProtocol> currentActiveScene;

- (void)switchToScene:(id)a0 enableAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithHub:(id)a0;
- (void)registerSceneConfig:(id)a0;
- (void)performSceneTransitionTo:(id)a0 enableAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendEventWillDeactivateForScene:(id)a0;
- (void)sendEventWillActivateForScene:(id)a0;
- (void)updateActiveSceneWithNewScene:(id)a0;
- (void)sendEventDidActivateForScene:(id)a0;
- (void)sendEventDidDeactivateForScene:(id)a0;
- (void)performTransitionAnimationFrom:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
