@class AWEUserProfileEventCommonParamsHandler, NSString, NSDictionary, AWETemplateArtistDataController, AWEUILoadingView, AWEUserModel, UICollectionView;
@protocol AWEUserProfileTabVCDelegate;

@interface AWETemplateArtistViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWENewCollectionDelegateWaterfallLayout, AWEZoomTransitionOuterContextProvider, AWETemplateArtistFunctionDelegate, AWETemplateArtistViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEUserModel *targetUser;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWETemplateArtistDataController *dataController;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHomePage;
@property (nonatomic) BOOL hideData;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> userDelegate;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 heightForHeaderInSection:(long long)a2;
- (id)aAWEPadModuleAdapter;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)p_loadMoreData;
- (void)p_refreshData;
- (void)changeTemplateArtistItem:(id)a0 toModelType:(long long)a1;
- (id)initWithUserID:(id)a0 targetUser:(id)a1;
- (void)reloadDiffData;
- (void)p_enterItemDetail:(id)a0;
- (void)p_startTimingForTrack;
- (void)p_trackTabAppear;
- (void)p_trackEventForStayTime;
- (BOOL)p_shouldHideNoMoreText;
- (void)p_endRefreshingWithMore:(BOOL)a0 list:(id)a1 error:(id)a2;
- (BOOL)p_isCurrentLoginUser;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (id)contentView;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)applicationWillResignActive;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)refreshData;
- (double)footerInset;

@end
