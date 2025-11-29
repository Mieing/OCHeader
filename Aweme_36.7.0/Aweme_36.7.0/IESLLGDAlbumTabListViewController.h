@class UIView, NSString, IESLLGDAlbumDataProcessor, NSDictionary, IESLLGDAlbumStatusErrorVC, IESLLPOIPreviewContainerManager, IESLLGoodsDetailPageContext, IESLLGDAlbumTabs, IESLLGDAlbumPageView, UILabel, NSMutableSet;
@protocol IESLLLoadingParticleViewInterface;

@interface IESLLGDAlbumTabListViewController : UIViewController

@property (retain, nonatomic) UIView *pageContainer;
@property (retain, nonatomic) IESLLGDAlbumTabs *albumCategory;
@property (retain, nonatomic) IESLLGDAlbumPageView *albumPage;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) IESLLPOIPreviewContainerManager *headerBarManager;
@property (retain, nonatomic) IESLLPOIPreviewContainerManager *bottomBarManager;
@property (retain, nonatomic) UIView<IESLLLoadingParticleViewInterface> *loadingView;
@property (retain, nonatomic) UILabel *loadingFailView;
@property (retain, nonatomic) IESLLGDAlbumStatusErrorVC *errorVC;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *extraParamsString;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *poiBackendType;
@property (copy, nonatomic) NSString *poiDeviceSameCity;
@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL needAnchor;
@property (nonatomic) long long picIndex;
@property (retain, nonatomic) NSMutableSet *hasLoadPageIndexes;
@property (retain, nonatomic) IESLLGDAlbumDataProcessor *albumDataProcessor;
@property (retain, nonatomic) NSDictionary *mobParams;
@property (copy, nonatomic) id /* block */ didTapUploadButton;

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
