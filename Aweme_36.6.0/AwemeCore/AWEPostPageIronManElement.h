@class NSString, AWENewPublishTableCell, NSDictionary;
@protocol AWEIronManModuleService;

@interface AWEPostPageIronManElement : AWEPostPageAnchorCheckCellElement <AWEPostPageAnchorProtocol, AWEAnchorListFilterProtocol, AWECommerceAnchorMessageProtocol>

@property (nonatomic) BOOL disposed;
@property (nonatomic) BOOL isFromIronMan;
@property (nonatomic) unsigned long long currentType;
@property (copy, nonatomic) NSString *mpShootWay;
@property (retain, nonatomic) AWENewPublishTableCell *ironManCell;
@property (copy, nonatomic) NSString *appletId;
@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;
@property (readonly, copy, nonatomic) NSDictionary *extras;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)referString;
- (BOOL)isAlbumVideo;
- (void)elementAppear;
- (void)bindServices:(id)a0;
- (BOOL)shouldBanAnchor:(id)a0;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)setupUIForAnchor;
- (void)configPlaceholderUI;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (id)navBarService;
- (void)loadSourceParams;
- (void)checkIfNoPermitIfNeed;
- (id)anchorExtraDict;
- (id)anchorContentDict;
- (void)deleteIronManAnchorIfNeed;
- (BOOL)checkStarAtlasMissionMatched:(id)a0;
- (void)cleanStarAtlas;
- (void)trackCurrentPage:(long long)a0;
- (void)addIronManAnchorNotification:(id)a0;
- (void)addIronManAnchorFromLynxNotification:(id)a0;
- (void)addIronManAnchorFromCallHostMethodNotification:(id)a0;
- (void)addIronManTalentAnchorNotification:(id)a0;
- (void)trackPublishPage;
- (void)deleteNormalAnchorIfNeed;
- (void)cancelSelectedIronMan:(id)a0;
- (void)updateCellWithReeditPassiveAnchor;
- (void)updateCellWithAnchorContent:(id)a0 type:(unsigned long long)a1;
- (void)updateIronManAnchor:(id)a0 needCheck:(BOOL)a1;
- (void)realUpdateIronManAnchor:(id)a0;
- (void)updateCellWithJsonString:(id)a0 anchorID:(id)a1 title:(id)a2;
- (void)trackMPEvent:(id)a0 appID:(id)a1;
- (void)transferToMountPage;
- (void)transferToTimorWithSchema:(id)a0;
- (void)openNativeAppMountContainer;
- (void)openSlidingContainerController;
- (void)presentSlidingContainerControllerWithTabs:(id)a0;
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
