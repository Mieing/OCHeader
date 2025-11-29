@class ACCMusicUIThemeModel, NSString, ACCCategoryMusicListManager, NSDictionary, UIView, AWEASSMusicNavView, AWEASSMusicListViewController;
@protocol ACCLoadingViewProtocol;

@interface AWEASSCategoryMusicListViewController : UIViewController <AWERouterViewControllerProtocol, HTSVideoAudioSupplier, ACCViewControllerEmptyPageHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEASSMusicListViewController *listVC;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *playlistId;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) ACCCategoryMusicListManager *musicManager;
@property (nonatomic) BOOL isEliteVersion;
@property (nonatomic) long long savedStatusBarStyle;
@property (nonatomic) BOOL shouldShowUploadMusicButton;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) BOOL shouldShowRank;
@property (retain, nonatomic) AWEASSMusicNavView *navView;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL disableCutMusic;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })emptyPageEdgeInsets;
- (void)emptyPagePrimaryButtonTapped;
- (void)p_loadMoreData;
- (void)p_endRefreshing;
- (void)p_refreshData:(BOOL)a0;
- (id)initWithCategoryId:(id)a0;
- (double)viewTopOffset;
- (void)cancelBtnClicked:(id)a0;
- (void)dismissAllPages;
- (void)configEmptyPageState:(unsigned long long)a0;
- (BOOL)enableDiscoveryRefactor;
- (void)transformAndSetListData;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (double)footerInset;

@end
