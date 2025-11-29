@class NSString, AWEModalTransitionDelegate;
@protocol ACCAdvanceEditViewModelProtocol, ACCAEViewContainerProtocol, DVEEditingRuntimeProtocol, ACCSelectAlbumAssetsProtocol, DVEPlayerServiceProtocol;

@interface ACCAEAddButtonComponent : ACCAdvanceEditComponent <ACCSelectAlbumAssetsDelegate>

@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> root;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (retain, nonatomic) id<ACCSelectAlbumAssetsProtocol> albumImpl;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegateForAlbum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)openAlbumViewController;
- (void)trackEventClickAddMaterial;
- (BOOL)checkIsAllowedOpenAlbum;
- (void)albumViewController:(id)a0 didFinishFetch:(id)a1;
- (BOOL)albumViewControllerShouldStartClipProcedure:(id)a0;
- (void)openAlbum;
- (void).cxx_destruct;

@end
