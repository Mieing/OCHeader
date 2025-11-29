@class NSMutableArray, NSString, IESECLiveReplayMessageListViewModel, IGListAdapter, UICollectionView, IESECLiveReplayDataStore, IESECGCDTimer;

@interface IESECReplayMessageListViewController : UIViewController <IGListAdapterDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESECLiveReplayMessageListViewModel *listViewModel;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) NSMutableArray *showedProductID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)startScroll;
- (void)addMaskView;
- (void)updateCurrentReplayItemWithModel:(id)a0;
- (void)trackMessageListShowIfNeeded:(id)a0;
- (void)prepareThenScrollToNextViewModel;
- (void)scrollToNextViewModel:(id)a0;
- (void).cxx_destruct;
- (void)cancelTimer;
- (id)initWithStore:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
