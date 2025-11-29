@class NSString, AWEModalTransitionDelegate;
@protocol ACCAdvanceEditViewModelProtocol, DVERootViewControllerProtocol, ACCAdvanceActionDispatchProtocol, DVEEditingContextProtocol, ACCSelectAlbumAssetsProtocol, DVEPlayerServiceProtocol;

@interface ACCAdvanceEditAlbumSelectModule : DVEFeatureModule <ACCSelectAlbumAssetsDelegate>

@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<ACCAdvanceActionDispatchProtocol> actionDispatch;
@property (weak, nonatomic) id<DVERootViewControllerProtocol> root;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (retain, nonatomic) id<ACCSelectAlbumAssetsProtocol> albumImpl;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegateForAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)moduleDidMount;
- (void)openAlbumViewController;
- (void)trackEventClickAddMaterial;
- (BOOL)checkIsAllowedOpenAlbum;
- (void)albumViewController:(id)a0 didFinishFetch:(id)a1;
- (BOOL)albumViewControllerShouldStartClipProcedure:(id)a0;
- (void).cxx_destruct;

@end
