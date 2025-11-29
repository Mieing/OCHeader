@class NSString, AWEMusicDetailTemplateHelper, IESServiceProvider, AWEDetailTrendTracker, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListViewModelProtocol;

@interface AWEDetailTrendActionServiceImpl : NSObject <AWEFollowShootChoosePopupDelegate, AWEDetailTemplateCreateVideoDelegate, AWEDetailActionService, AWEDetailTemplateActionService>

@property (weak, nonatomic) AWEDetailTrendViewModel *stateContext;
@property (weak, nonatomic) AWEDetailTrendTracker *tracker;
@property (nonatomic, getter=isOnAction) BOOL onAction;
@property (retain, nonatomic) AWEMusicDetailTemplateHelper *templateHelper;
@property (weak, nonatomic) IESServiceProvider *serviceProvider;
@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useCustomRouterActionWithSchema:(id)a0;
- (void)actionWithActionSender:(id)a0;
- (void)actionWithAICreationSender:(id)a0;
- (id)initWithStateContext:(id)a0 serviceProvider:(id)a1 tracker:(id)a2;
- (void)handleActionSchema:(id)a0 trackParams:(id)a1;
- (void)actionWithOneClickFilmSender:(id)a0;
- (void)actionWithAICreationSender:(id)a0 musicModel:(id)a1;
- (void)actionWithSchema:(id)a0;
- (void)routeWithSchemaForTextOnImageIfNeed:(id)a0 awemeModel:(id)a1;
- (void)routerCameraWithSchema:(id)a0;
- (void)trackCheckSchemaCorrectWithSuccess:(BOOL)a0 extraDict:(id)a1;
- (BOOL)tryYuanDanRouterCameraWithComposerModel:(id)a0 schema:(id)a1;
- (void)handleFollowshootSchema:(id)a0;
- (void).cxx_destruct;

@end
