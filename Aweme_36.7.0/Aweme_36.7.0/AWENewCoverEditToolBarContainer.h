@class AWEEditActionItemView, NSString, UIView, AWENewCoverEditToolBarDataManager, AWENewCoverEditToolBarCollectionView, NSMutableArray, NSNumber;
@protocol ACCBarItemSortDataSource;

@interface AWENewCoverEditToolBarContainer : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, ACCEditTRBarItemContainerView>

@property (retain, nonatomic) AWENewCoverEditToolBarDataManager *dataManager;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) AWENewCoverEditToolBarCollectionView *toolBarCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *maxHeightValue;
@property (readonly, nonatomic) AWEEditActionItemView *moreItemView;
@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long location;
@property (copy, nonatomic) id /* block */ clickCallback;
@property (retain, nonatomic) id<ACCBarItemSortDataSource> sortDataSource;
@property (copy, nonatomic) id /* block */ shouldUpdateItemBlock;

- (id)viewWithBarItemID:(void *)a0;
- (void)updateAllBarItems;
- (void)updateBarItemWithItemId:(void *)a0;
- (void)markUpdateBarItemWithItemId:(void *)a0 animated:(BOOL)a1;
- (id)barItemWithItemId:(void *)a0;
- (id)barItemContentView;
- (BOOL)addBarItem:(id)a0;
- (void)updateAllBarItemsImmediatellyWithouAnimation;
- (id)viewIndexWithBarItemID:(void *)a0;
- (void)resetFoldState;
- (double)p_containerTopOffset;
- (void)removeBarItem:(void *)a0;
- (BOOL)addMoreBarItem:(id)a0;
- (void)removeMoreBarItem:(void *)a0;
- (void)triggerClickCallbackWithView:(id)a0;
- (void)addClickCallback:(id /* block */)a0;
- (void)setMoreTouchUpEvent:(id /* block */)a0;
- (void)configCellWithCell:(id)a0 IndexPath:(id)a1;
- (id)getItemIdWithIndexPath:(id)a0;
- (void)resetUpBarContentView;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)addSubscriber:(id)a0;
- (id)initWithContentView:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)setupUI;
- (void)containerViewDidLoad;
- (id)barItems;

@end
