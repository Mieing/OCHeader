@class UIView, AWEGDAlbumTabs, NSString, AWEGDAlbumDataProcessor, NSDictionary, AWEPOIPreviewContainerManager, AWEGDAlbumStatusErrorVC, AWEGoodsDetailPageContext, NSMutableSet, DUXLoadingParticleView, UILabel, AWEGDAlbumPageView;

@interface AWEGDAlbumTabListViewController : UIViewController <BTMPageManagableProtocol>

@property (retain, nonatomic) UIView *pageContainer;
@property (retain, nonatomic) AWEGDAlbumTabs *albumCategory;
@property (retain, nonatomic) AWEGDAlbumPageView *albumPage;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) AWEPOIPreviewContainerManager *headerBarManager;
@property (retain, nonatomic) AWEPOIPreviewContainerManager *bottomBarManager;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UILabel *loadingFailView;
@property (retain, nonatomic) AWEGDAlbumStatusErrorVC *errorVC;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *extraParamsString;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiDeviceSameCity;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL needAnchor;
@property (nonatomic) long long picIndex;
@property (retain, nonatomic) NSMutableSet *hasLoadPageIndexes;
@property (retain, nonatomic) AWEGDAlbumDataProcessor *albumDataProcessor;
@property (retain, nonatomic) NSDictionary *mobParams;
@property (copy, nonatomic) id /* block */ didTapUploadButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)removeLoadingView;
- (void)setupHeaderContainer;
- (void)setupBottomContainer;
- (void)setupLoadingView;
- (void)hiddenErrorView;
- (void)loadFirstPage:(BOOL)a0;
- (void)setupAlbumPageInfo;
- (void)setupAlbumCategory;
- (void)setupAlbumPage;
- (void)albumPageSwitch:(long long)a0;
- (void)trackEventWithPageIndex:(long long)a0;
- (void)tryAnchorFistAlbumIndexIfNeeds;
- (void)trackEnterAlbumPage;
- (void)reloadAlbumPageWithPOIID:(id)a0;
- (void)handleLynxBroadcastEvent:(id)a0;
- (id)initWithParams:(id)a0 context:(id)a1;
- (void)backAction;
- (void)updateLayout;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)subscribeNotification;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)showErrorView;

@end
