@class AWEUserWorkCellViewModelPool, AWEUserWorkContext, AWEUserWorkCellComponentConfig, AWEUserWorkViewControllerConfig, NSMutableDictionary, NSDictionary, NSString, UICollectionViewLayout, UIViewController, AWEDCFeedConfig, NSMutableArray;
@protocol AWEDCFeedListViewControllerProtocol, AWEAwemeDetailTableViewControllerProtocol;

@interface AWEUserWorkViewController : UIViewController <AWEDCFeedListViewControllerDelegate, AWEUserProfileTabBaseMethod, AWEUserWorkViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *contentViewController;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UICollectionViewLayout *layout;
@property (retain, nonatomic) AWEUserWorkContext *userWorkContext;
@property (retain, nonatomic) AWEUserWorkViewControllerConfig *config;
@property (retain, nonatomic) AWEDCFeedConfig *feedConfig;
@property (retain, nonatomic) AWEUserWorkCellViewModelPool *viewModelPool;
@property (retain, nonatomic) AWEUserWorkCellComponentConfig *componentConfig;
@property (retain, nonatomic) NSMutableArray *removedIndexPaths;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (retain, nonatomic) NSMutableArray *sectionControllerClassArray;
@property (retain, nonatomic) NSMutableArray *sectionViewModelArray;
@property (retain, nonatomic) NSMutableDictionary *sectionViewModelDict;
@property (nonatomic) double lastContentWidth;
@property (nonatomic) BOOL modelsArrayNotEmpty;
@property (nonatomic) BOOL viewAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *dataSource;

+ (Class)aAWEPadUserPageAdapterClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dcFeed:(id)a0 frameForCollectionView:(id)a1;
- (BOOL)dcFeed:(id)a0 handleRouterEventWithType:(unsigned long long)a1 awemeModel:(id)a2;
- (id)dcFeed:(id)a0 layoutForCollectionView:(id)a1;
- (id)dcFeed:(id)a0 sectionViewModelsForAwemeModels:(id)a1 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a2;
- (void)awe_themeReload;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (BOOL)useGradientBGView;
- (id)requestCommonParams;
- (id)aAWEPadUserPageAdapter;
- (id)trackParamsWith:(id)a0;
- (id)awemeSectionViewModel;
- (void)adjustCellPositionWithOffset:(double)a0;
- (id)sectionViewModelWithClass:(Class)a0;
- (id)transitionStartViewForRealIndexPath:(id)a0 layoutIfNeeded:(BOOL)a1;
- (void)configDetailViewController:(id)a0;
- (void)setupControllerAfterSetContentViewController;
- (void)setupContentViewController;
- (id)transitionForIndexPath:(id)a0;
- (id)transitionStartViewForIndexPath:(id)a0;
- (void)reloadData;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)contentView;
- (id)requestURL;
- (void)updateBackgroundColor;
- (long long)tableType;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)tableName;
- (void)forwardInvocation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)refreshData;
- (id)requestMethod;

@end
