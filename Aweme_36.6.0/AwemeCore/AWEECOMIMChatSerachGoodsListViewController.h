@class AWEECOMIMChatSerachListSerachAreaView, NSString, NSTimer, AWEECOMIMChatSerachResultEmptyView, AWEECOMIMChatSerachListSectionModel, AWEECOMIMChatSerachListBiz, NSMutableSet, UICollectionView, AWEECOMIMPageTrackUtil;

@interface AWEECOMIMChatSerachGoodsListViewController : AWEECOMIMBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *theOtherId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *searchKey;
@property (retain, nonatomic) AWEECOMIMChatSerachListSectionModel *sectionModel;
@property (retain, nonatomic) AWEECOMIMChatSerachListSerachAreaView *serachAreaView;
@property (retain, nonatomic) AWEECOMIMChatSerachResultEmptyView *emptyView;
@property (retain, nonatomic) AWEECOMIMChatSerachListBiz *listBiz;
@property (nonatomic) long long serachType;
@property (nonatomic) long long lastSortOrder;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (retain, nonatomic) NSMutableSet *goodsIdSet;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)loadMore;
- (id)locationSubType;
- (void)customInitNavigationBar;
- (id)initWithInfoDict:(id)a0;
- (void)updateUIWithSearchText:(id)a0;
- (void)resignTextViewFirstResponder;
- (void)actualExecution;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)updateUI;
- (id)pageName;

@end
