@class NSString, IGListAdapter, IESECCommentDataController, UICollectionView, IESECGoodsCommentContext, IESECOnceHelper;

@interface IESECMeaninglessCommentViewController : UIViewController <IGListAdapterDataSource, IESECGoodsCommentHeaderActionDelegate, IESECCommentNCellActionDelegate, IGListDisplayDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) IESECCommentDataController *dataController;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (retain, nonatomic) IESECOnceHelper *once;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)tapClose;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)endRefresh;
- (void)addInfiniteScroll;
- (void)openCommentItemPreviewWithImageURLArray:(id)a0 selectedImageIndex:(long long)a1 videoModel:(id)a2;
- (void)clickMoreActionButton:(id)a0;
- (void)clickShopReplyFoldButtonWithCell:(id)a0;
- (void)clickReplyActionButton:(id)a0;
- (void)commentNCell:(id)a0 openGoodsDetailWithGoodInfo:(id)a1;
- (void)commentInteractionDurationTrack:(id)a0;
- (void)tapShare;
- (void)tapShoppingCart;
- (id)singleCommentShowClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)setup;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupWithContext:(id)a0;

@end
