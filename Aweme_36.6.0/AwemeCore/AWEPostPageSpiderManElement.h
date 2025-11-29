@class NSString, AWENewPublishTableCell, NSDictionary, UIViewController;

@interface AWEPostPageSpiderManElement : AWEPostPageAnchorCheckCellElement <AWEPostPageAnchorProtocol, AWECommerceAnchorMessageProtocol, AWEAnchorListFilterProtocol>

@property (nonatomic) BOOL disposed;
@property (nonatomic) BOOL isFromIronMan;
@property (nonatomic) unsigned long long currentType;
@property (copy, nonatomic) NSString *mpShootWay;
@property (retain, nonatomic) AWENewPublishTableCell *ironManCell;
@property (weak, nonatomic) UIViewController *gameListController;
@property (readonly, copy, nonatomic) NSDictionary *extras;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)publishViewModel;
- (void)closeViewControllerNotification:(id)a0;
- (BOOL)isAlbumVideo;
- (void)elementAppear;
- (void)bindServices:(id)a0;
- (BOOL)shouldBanAnchor:(id)a0;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)setupUIForAnchor;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (BOOL)forceReceiveEvents;
- (id)navBarService;
- (void)loadSourceParams;
- (void)checkIfNoPermitIfNeed;
- (void)deleteIronManAnchorIfNeed;
- (void)trackCurrentPage:(long long)a0;
- (void)addIronManAnchorNotification:(id)a0;
- (void)addIronManAnchorFromLynxNotification:(id)a0;
- (void)addIronManAnchorFromCallHostMethodNotification:(id)a0;
- (void)addIronManTalentAnchorNotification:(id)a0;
- (void)trackPublishPage;
- (void)deleteNormalAnchorIfNeed;
- (void)cancelSelectedIronMan:(id)a0;
- (void)updateCellWithAnchorContent:(id)a0 type:(unsigned long long)a1;
- (void)updateIronManAnchor:(id)a0 needCheck:(BOOL)a1;
- (void)realUpdateIronManAnchor:(id)a0;
- (void)updateCellWithJsonString:(id)a0 anchorID:(id)a1 title:(id)a2;
- (void)trackMPEvent:(id)a0 appID:(id)a1;
- (void)transferToTimorWithSchema:(id)a0;
- (unsigned long long)getVideoPermissionAB;
- (void)trackNoPermission:(id)a0;
- (void)cleanStarAtlasIfNeed;
- (void)checkAnchorPermissionIfNeed;
- (BOOL)shouldCheckBindChannel:(id)a0;
- (void)checkAnchorPermission;
- (void)trackAnchorCheckResult:(BOOL)a0 reason:(id)a1 bindChannel:(id)a2 extra:(id)a3;
- (id)paramForSpecialStr;
- (void)checkAnchorStatusWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkStarAtlasMission;
- (void)transferToGameList:(long long)a0 anchorDismissBlock:(id /* block */)a1;
- (id)getVideoSource;
- (void)showPermissionErrorToastWithName:(id)a0 toastMsg:(id)a1;
- (id)toastContainerWithViewController:(id)a0;
- (void)trackNoPermitJustify:(id)a0 reason:(id)a1;
- (BOOL)isOtherApp;
- (void)setUp;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)addObserver;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)setViewModel:(id)a0;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;

@end
