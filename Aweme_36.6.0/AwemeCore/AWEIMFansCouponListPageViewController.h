@class NSArray, NSString, UICollectionView, UIView, NSMutableSet, AWEIMFansCouponListPageCell;
@protocol IESIMConversationProtocol, IESIMLoadingViewProtocol;

@interface AWEIMFansCouponListPageViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, AWEIMFansCouponListPageCellProtocol>

@property (copy, nonatomic) NSArray *couponUnreadList;
@property (copy, nonatomic) NSArray *couponHistoryList;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSString *lastReadIndex;
@property (nonatomic) long long nextCursor;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEIMFansCouponListPageCell *pageCell;
@property (retain, nonatomic) NSMutableSet *trackSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__setupUI;
- (void)didClickedCouponCellToUse:(id)a0;
- (void)refreshCouponStatus;
- (void)__showLoadingView;
- (void)__fetchServerState;
- (void)__trackEnterEvent;
- (void)__backBtnClicked;
- (void)__hideLoadingView;
- (id)getTrackModel;
- (void)trackWithCell:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
