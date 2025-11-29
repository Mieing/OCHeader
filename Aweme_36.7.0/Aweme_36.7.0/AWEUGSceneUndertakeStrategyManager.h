@class NSDictionary, NSMutableArray, NSString;

@interface AWEUGSceneUndertakeStrategyManager : HTSService <AWEUGSceneUndertakeStrategyManagerProtocol>

@property (copy, nonatomic) NSDictionary *sceneTypeClassMap;
@property (retain, nonatomic) NSMutableArray *sceneStrategyList;
@property (retain, nonatomic) NSMutableArray *evadeStrategyList;
@property (nonatomic) BOOL isUGLandingTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectEvadeStrategy:(id)a0;
- (void)injectSceneUndertakeStrategy:(id)a0 config:(id)a1;
- (void)removeSceneUndertakeStrategy:(id)a0;
- (void)addPitayaLandingVideoPlayTrackParamsTo:(id)a0;
- (void)trackLogWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
