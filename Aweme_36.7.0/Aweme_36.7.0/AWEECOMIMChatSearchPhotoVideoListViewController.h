@class AWEECOMIMChatSerachListBiz, NSString, UICollectionView, NSArray, AWEECOMIMPageTrackUtil, AWEECOMIMChatSerachResultEmptyView;

@interface AWEECOMIMChatSearchPhotoVideoListViewController : AWEECOMIMBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *theOtherId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *searchKey;
@property (retain, nonatomic) AWEECOMIMChatSerachResultEmptyView *emptyView;
@property (retain, nonatomic) AWEECOMIMChatSerachListBiz *listBiz;
@property (nonatomic) long long serachType;
@property (nonatomic) long long lastSortOrder;
@property (copy, nonatomic) NSArray *sectionModelList;
@property (copy, nonatomic) NSArray *mediaInfo2MsgIDModels;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)showPhotoViewer:(unsigned long long)a0;
- (void)saveMediaWithIndex:(long long)a0;
- (void)customInitNavigationBar;
- (void)generateSectionModelListWithModel:(id)a0;
- (void)generatMediaInfo2MsgIDModelsWithSectionModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithInfoDict:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)fetchData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (id)pageName;

@end
