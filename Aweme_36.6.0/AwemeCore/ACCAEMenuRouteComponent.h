@class NSTimer, ACCAEMenuInfo, NSString;
@protocol DVEEditingRuntimeProtocol, ACCAEComponentActionProtocol, DVEComponentViewManagerProtocol, DVETrackEventProtocol, ACCAdvanceEditViewModelProtocol;

@interface ACCAEMenuRouteComponent : ACCAdvanceEditComponent <ACCAEMenuRouteProtocol, ACCAEMenuConfigProtocol, ACCAdvanceEditDataRepositorySubscriber>

@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomBarManager;
@property (weak, nonatomic) id<DVETrackEventProtocol> tracker;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> editViewModel;
@property (nonatomic) BOOL ignoreObserve;
@property (retain, nonatomic) ACCAEMenuInfo *menuInfo;
@property (retain, nonatomic) NSTimer *throttleTimer;
@property (copy, nonatomic) NSString *changeMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (id)serviceBinding;
- (void)setupBottomView;
- (void)bindServices:(id)a0;
- (id)rootMenuList;
- (id)menuRelation;
- (id)menuConfigPatch;
- (void)componentAnimationDidCompletion;
- (void)openSubComponent:(id)a0;
- (void)openParentComponent:(id)a0;
- (void)selectedSegmentDidChangeWithNew:(id)a0 old:(id)a1;
- (BOOL)enableBottomViewInitOpt;
- (void)showStickerMenu;
- (void)refreshCurrentBar;
- (void)closeCutMenuComponent:(id)a0;
- (void)configCloseCutMenuBackButton:(id)a0;
- (void)closeMusicMenuComponent:(id)a0;
- (void)closeTextMenuComponent:(id)a0;
- (void)closeAutoCaptionComponent:(id)a0;
- (void)closeEffectMenuComponent:(id)a0;
- (void)closeCombinedAudioSubMenuComponent:(id)a0;
- (void)tryExecuteMenuRoute;
- (BOOL)isStickerType:(unsigned long long)a0;
- (void)popToRootWithComponentType:(long long)a0;
- (void)trackMenuChange;
- (id)menuTrackKeyWithType:(long long)a0 group:(long long)a1;
- (void).cxx_destruct;
- (void)route;
- (void)performWithoutAnimation:(id /* block */)a0;

@end
